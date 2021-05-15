# Intro to C++

> "A generation which ignores history has no past and no future." - Robert Heinlein

 With that in mind, let's start with some history and cover some basics along the way!

## Birth of C

- When Dennis Ritchie of Bell Laboratories was working on a project to develop the UNIX OS in the early 70s, he needed a language that was concise and produced fast programs which could control hardware efficiently.

- Back then, Assembly language was used for things like these. However, Assembly is a low-level language which essentially means that it directly works with the computer hardware. As such, it is pretty specific to a particular processor. Since, UNIX was meant to be run on various computer types, a low-level language was no longer a feasible option.

- Ritchie wanted a language "that combined low-level efficiency and hardware access with high-level generality and portability*" and thus created C.

*If you can recompile the program that was written on one OS and then run it on a different OS without making changes and have it runs smoothly without any issues, then such a program is portable 

## Features of C

In general, computer languages deal with two concepts: data and algorithms. The data consists of the information a program uses and process. The algorithms are the methods the program uses. C is a procedural language, which means that it emphasizes the algorithm aspect of programming.

- C embraces *structure programming* with well-behaved constructions such as `for` , `while`, `do while` loop and the `if else` statement. 
- C facilitates *top-down design*&mdash;idea of breaking a large program into smaller and more manageable components/modules&mdash;by allowing to develop program units called *functions* to represent individual task modules.

## Transitioning to OOP

Despite the improvements in clarity, reliability and ease of maintenance of programs due the principles of structured programming, large-scale programming remained to be a mess. Object-oriented Programming, short for OOP, solves that challenge. Unlike procedural programming, which emphasizes algorithms, OOP emphasizes the data. The idea is to design data forms that correspond to the essential features of a problem.

### Intro to OOP

This new approach to program design is to first design classes that accurately represent those things with which the program deals with. A class of Car can contain information such as model no., colour, seats, etc. and likewise contain methods like 'start', 'move', 'turn', 'stop' and the like. Thus, this 'blob' would contain everything car related. In other words, it deals with cars and cars only. You won't find a method to add two numbers in there. Its is own separate entity. You would then go on to design a program using such a class. Do note that classes are essentially blueprints for a specific object. In our example, Car class is one such blueprint for cars, meaning any car created with the that blueprint with have all those properties or fields and methods ingrained into them. 

> The process of going from a lower level of organization, such as classes, to a higher level, such as program design, is called bottom-up programming.

### Features of OOP

There's more to OOP than the binding data and methods into a class definition. 

- facilitates creating reusable code and that can eventually save a lot of work
- allows programmers to restrict access to certain data thus safeguarding data from improper access
- polymorphism lets you create multiple definitions for operators and functions, with the programming context determining which definition is used
- inheritance lets you derive new classes from old ones

Instead of focusing on the task at hand, you concentrate on representing concepts thus going through a bottom-up approach.

### Generic Programming

Like OOP, its aim is to provide tools to make reusable code simpler. While OOP emphasizes the data aspect, generic programming emphasizes independence from a particular data type.  OOP is a tool for managing large projects, whereas generic programming provides tools for performing common tasks, such as sorting data or merging lists. The term *generic* refers to code that is type independent

One neat example would be if you wanted to sort data of various types, you would normally have to create a separate sorting function for each type. Generic programming involves extending the language so that you can write a function for a generic (unspecified) type once and use it for a variety of actual types. 

C++ templates provides a way for doing that.

## Enter C++

Bjarne Stroustrup developed the language at Bell Labs in the early 1980s. He added OOP features and generic programming support to C without significantly changing the C component. Thus C++ is a superset* of C.

> Fun fact: The name C++ comes from the C increment operator ++, which adds one to the value of the variable. Thus, it correctly suggests an augmented version of C.

A computer program translates a real-life problem into a series of actions to be take by a computer. The OOP aspect of C++ gives the language the ability to relate to concepts involved in the problem and the C part of C++ gives the ability to get close to the hardware. This combination of abilities is what made C++ so widespread. Do note that Stroustrup added templates only after C++ achieved some success, and thus enabled generic programming.

## Onto the future

In 1990, the American National Standards Institute (ANSI) create a committee to standardize C++. It had already done so for C. Anyways, later, the International Organization for Standardization (ISO) joined the forces with its own committee, creating a joint ANSI/ISO effort to develop the standard. After several years of work, it eventually led to the International Standard (ISO/IEC) which was adopted in 1998 by the ISO. This standard is often referred to C++98 and it not only refined the description of existing C++ features but also extended language with exceptions, runtime type identification, templates and the Standard Template Library.

The year 2003 brought the publication of the second edition of the C++ standard. This edition is often called C++03 and it didn't change language features. Thus, commonly, C++98 is used to refer to C++98/C++03.

Since then, the language has continued to evolve. In August 2011, C++11 standard was released and added numerous new features. After a minor C+++14 update released in December 2014, various new additions were introduced in C++17. Similarly, in December 2020, C++20 was also published.

## How a C++ program is created

1. You write your C++ source code.
2. Compiler translates the code to **the** *machine language* used by the host computer. This output is called the *object code* for the program.
3. Linker then combines the object code is combined with object code for the functions (you used from the libraries) and with some other standard startup code to produce a runtime version of the program. This final product is called the *executable code*.

That's it! Onto Chapter 2.

# Credits

I am using C++ Primer Plus by Stephen Prata. These are just my notes and are purely for personal references. 