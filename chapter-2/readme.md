# Getting started

Here's the "Hello World" version of C++:

```cpp
#include <iostream>					// a PREPROCESSOR direction
using namespace std;				// make definitions visible

int main()							// function header
{									// start of the function body
	cout << "Hello world!!";		// print the message
    cout << endl;					// go to new line
    return 0;						// terminate main()
}									// end of the function body
```

Now, we'll be going over the different parts of the program.

## Hello World!!

### `main()`

Lines 4 to 9 constitute a *function definition*. It consists of two parts: *function header* and *function body*.

Function header briefly describes what a function does while the function body contains all the meat of the function, meaning has all the instructions that it was created to do. Each of these instructions is called a *statement* and each of these statements should be terminated with a semicolon. In C++, semicolon is used not as a separator but instead a terminator: thus, requires the use of `;` at the end of every statements.

 The part preceding the function name in the header is called a *function return type*: it describes what a function will return as a result of its operations upon its termination. The part within the parentheses following the function name is called the argument list or parameter list: it describes what function takes in as input(s). So in brief, `int main()` states that the `main()` function returns a integer value to the function that calls it and that `main()` takes no information.

The main function is not called by a programmer but the startup code that the compiler adds to your program to mediate between the program and the OS.

In `main()` function you can omit the *return* statement. If the compiler reaches the end of the function without encountering a return statement, the effect will still be same as if you ended `main()` with `return 0;` . This implicit return is provided only for `main()` and not for any other function.

When a C++ program is run, execution always begins at the beginning of the `main()` function. So, it is a must for a program to be complete.

Other things in the sample program:

- **Preprocessor and the `iostream` file**: 

  - A preprocessor is a program the processes a source file before the main compilation takes place. It is automatically invoked when a program is compiled. `#include <iostream>` directive causes the preprocessor to add the contents of the iostream file to a program. This is what it typically does: adding or replacing text in the source code before it's compiled.

  - The `io` in the `iostream` refers to input and output of a program. It acts as the communication between the program and the outside world. The contents of the this file will replace the `#include <iostream>`  line and allows you to access various features like `cout` and `cin`. 
  - Files like `iostream` are also called header files since they are included at the beginning of a file. C++ compilers come with many header files, each supporting a particular family of facilities. The C tradition has been to use the h extension with header files. For example, the C `math.h` header file supports various C math functions. Initially C++ did the same but now the 'h' extension has been reserved for the old C header files, (C++ can still use them btw). Now, C++ header files have no extension. There are also C header that have been converted to C++ header files by dropping the 'h' extension and prefixing the filename with a 'c' to indicate it comes from C. For instance, the same `math.h` would now become `cmath`. The h-free files however incorporate namespaces.

- **Namespaces**:

  	- This is a C++ feature designed to simplify the writing of large software.
  	- It solves a potential problem that arises when you use two (or more) libraries that both have a function named, let's say, `menu()`. Now `menu()` from library 'James' takes in an integer value as a single argument while `menu()` from library 'Katie' takes in a string value. If you then use `menu()` , the compiler is bound to get confused. Let alone compiler, even the programmer will get confused. So, this is where namespace makes its appearance.
  	- Think of namespace like family names of all the definitions. So what will happen is, James will place his definitions in a namespace called 'James' (obviously) while Katie will do the same for hers. What will this result to? Well, `James::menu()` will become the full name of **that** menu and `Katie::menu()` will be the full name of **the other** menu. 
  	- So if you want to call James' menu you'll then have to call it like so: `James::menu(399)`. And similarly for Katie's `Katie::menu("Hi there!")`. 
  - When we used, `cout` and `endl` from the h-free header `iostream`, we really used `std::cout` and `std::endl` respectively.
  - But prefixing `std::` every time you use something from the standard component of C++ compilers will get old really quickly. This is where `using` directive comes in.
  - By using `using namespace std;` , you can now use names defined in the`std` namespace without using the prefix. This `using` directive makes all the names in the `std` namespace available. Modern practice regards this as being lazy and a potential problem in large projects. The preferred approaches are to use the `std::` qualifier or to use something called a using declaration to make just particular names available, like so: `using std::cout`.

> Note on comments in C++: A *comment* is a remark from the programmer to the reader and is ignored by the compiler. A C++ comment starts with `//` and ends at the new line character. 

### Output with `cout`

Recall: `cout << "Hello world!!"`

The part enclosed in double quotation marks is the message to print. It is called character string. The `<<` notation indicates that the statement is sending the string to `cout`. 

`cout` is a predefined object that knows how to display strings, numbers and individual characters. 

> Recall that an object is a particular instance of a class, and a class defines how data is stored and used.

Let's try to understand how it works. The output is a steam: a series of characters flowing from the program. The `cout` object, whose properties are defined in the `iostream` file, represents **that** stream. The object properties for `cout` include an insertion operator `<<` that inserts the information on its right into the stream. 

In our example statement, it inserts the string "Hello world!!" into the output stream. Thus, you can now say, that your program inserts a string into the output stream.

#### `endl`

Inserting `endl` into the output stream causes the screen cursor to move to the beginning of the next line. Special notation like `endl` that have particular meanings to `cout` are called manipulators. Like `cout`, it is also defined in the `iostream` header file and is part of the `std` namespace.

What we can learn from this is, `cout`  does not move cursor however it wants. You will have to specify this detail. 

```cpp
cout << "Hi there";
cout << "John";
```

Guess what these two lines will produce? Nothing! You will have to include these inside a proper function body of a complete program. That aside, your output will look like this: `Hi thereJohn`.

The first `cout` leaves the cursor positioned just after the "e" in the string. And the next `cout` picks it from there. That's how `cout` works. Let alone a new line, you won't get anything until you tell it to do it. So, if you wanted space between them, you'd have literally add " " at the end of the first string or the beginning of the second string.

#### The old way: \n

Of course, you can do that with the newline character: \n. 

```cpp
cout << "Hi there\n"; // show text and go to new line
coun << "John" << endl; // show text and go to new line
```

One difference is that `endl`  guarantees the output will be flushed (immediately displayed onscreen) before the program moves on. You don't get that guarantee with "\n",  which means that it is possible on some systems in some circumstances a prompt might not be displayed until after you enter the information being prompted for.

## Moving on

There are two types: a *declaration statement* creates a variable and the second, an *assignment statement provides a value for that variable. 

```cpp
int counter;				// declare an interger variable
counter = 21;				// assign a value to the variable

counter = counter - 1;		// modify the variable

cout << counter << endl;	// print the value of the variable
cout << counter + 100;		// print the modified value of the variable on the fly
```

### Declaration Statements

To store an item in computer's memory, you must identify both the storage location and how much memory storage space the information requires. We use a declaration statement to indicate the type of storage and to provide a label for the location.

`int counter;`  says that it needs enough storage to hold a integer, for which C++ uses the label `int`. The compiler then actually takes care of all the hassle that comes with allocating and labelling memory for that task.

### Assignment Statements

An assignment statement assigns a value to a storage location. `counter = 21;` is one example.

The `=`  symbol is called the assignment operator. You can even do something like this:

```cpp
int a,b,c;

a = b = c = 2;
```

  The assignment works from right to left. First, 2 gets assigned to 'c' and then the value of 'c' get assigned to 'b'. Same way, the value of 'b' then gets into 'a.'

### Printing variables

`cout << counter;`  

What happens with this line is, first `cout`  replaces `counter`  with the current value of the variable. Then, it translates the value to the proper output characters. `cout` works just the same with integers as it did strings. But do note that they're in fact fundamentally different data types.

`"23"` is a string that holds the characters '2' and '3'. The program internally stores the numeric codes for the character '2' and '3'. But in case of integers, the computer stores 23 as binary number. And thus, when printing 23, `cout` must first covert the number in integer form to character form before it can print anything. Takeaway is that `cout`  smartly figures out what type of data it is dealing with and works accordingly.

This smart way in which `cout`  differs from `printf`  function in C is due to C++'s  OOP features. The C++ insertion operator `<<`  adjusts its behaviour to fit the type of data that follows it. This is an example of operator overloading.

> Operator overloading refers to the fact that in C++,  the same symbol  can have more than one meaning. C++ extends the operator overloading concept by letting you redefine operator meanings for the user-defined types called classes.

### Taking user input

```cpp
int age;

cout << "What's your age again?\n";
cin >> age;
```

Consider the above example. `cin`  also is defined in `iostream`  as a object that represents a stream. For input, `>>`  operator is used to extract characters from the input stream. Like `cout`,  it is also very smart. It converts the input, which is just a series of characters typed from the keyboard, into a form acceptable to the variable receiving the information. 

### Good stuff

A class is a data type the user defines.  To define a class, you describe what sort of information it can represent and what sort of actions you can perform with that data.  A class has the same relationship with an object that a type does with a variable.

Consider `cout`.  It is a object created to have the properties of the `ostream` class, which describes the sort of data an `ostream` object represents and the operations you can perform with and to it, such as inserting number or string into an output stream. Likewise, `cin` is an object created with the properties of the `istream` class. Both `ostream` and `istream` are defined in `iostream`.

The class description specifies all the operations that can be performed on objects of that class. To perform such actions, you send a message to the object. One way of "sending a message" is by using a class method which is like a function call. The other way is to redefine an operator. You guessed it! `cin` and `cout` use this second method.

## Functions

C++ functions come in two varieties: those that return something and those don't. For those that do, you can use the return value to assign to a variable or do much more complex stuff. For example, the standard C/C++ library includes a function called `sqrt()` that returns the square root of a number. Say, you want to calculate square root of 25 and store it in a variable. You can do that like so: `int x = sqrt(25);`  

The value in the parentheses is information that is sent to the function: it is said to be passed to the called function. This type of value is called parameter. The `sqrt()` calculates the answer to be 5 and sends that value back to the calling function. This returned value from a function is called *return value* of the function. And oh yeah, using a function is also called *calling* a function. And the one that does the act of calling is called *calling function*. So in that example, `sqrt(25)` is the called function and whatever function called it is the calling function, probably `main()`.

### Function Prototypes

But before C++ compiler can use a function, it must know exactly what arguments go into the said function and what type of value it returns, if any. This is where *function prototype* comes in. A function prototype is like a variable declaration but for the functions instead. The function prototype for `sqrt()` looks like this: `double sqrt(double);` The initial `double` is for the return type and the second, inside parentheses, is for argument that it takes in. The terminating semicolon in the prototype identifies it as statement and thus makes it a prototype instead of a function header. In case the semicolon is omitted, the compiler expects to  see a function body following the header.

Whenever `sqrt()` is used in a program, it is expected that the function prototype is also provided. You can either type it out yourself or include the header `cmath` header file which has the prototype in it.

Function prototype is not to be confused with function definition. The prototype only describes the function interface. The definition, on the other hand, includes the code that actually does something. Both C and C++ divide these two features for library functions. The library files contain the compiled code for the functions, whereas the header files contain the prototypes.

You should always place a function prototype ahead of the function's use, like so:

```cpp
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int sqaure_root, num;
    
    cout << "Enter any number: ";
    cin >> num;
    
    sqaure_root = sqrt(49);
    
    cout << "The sqaure root of " << num <<
        << " is " << sqaure_root << endl;
    return 0
}
```

C++ library functions are stored in library files. When the compiler compiles a program, it must search the library files for the functions you've used.

# Summary

C++ program consists of one or more modules called functions. Programs begin executing with the function called `main()`. A function consists of a header and a body. The header is the interface of the function while the body consists the statements it uses to do something. C++ statements are of following types: 

- **Declaration statement**: announces the name and the type of a variable used in a function
- **Assignment statement**: assigns a value to a variable
- **Message statement**: sends a message to an object, initiating some sort of action
- **Function call**: invokes a function
- **Function prototype**: declares the return type along with the number and types of arguments of a function
- **Return statement**: sends value from a called function back to the calling function

That's it! Now onto some questions from the exercises. Since we are still doing the basics, I won't be doing all of them but instead will be doing the last three questions which are as hard as it gets for this chapter. So, you will find the solutions to those question in this folder.