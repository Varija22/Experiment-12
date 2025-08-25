Program 1

Aim:

To write a C++ program using a **constructor** in a class to accept details of a student (Roll Number, Name, and Fee) and to display the data using a member function.

Tools Used:
Programiz online compiler


Theory:

In object-oriented programming (OOP), a **class** is a user-defined data type that acts as a blueprint for creating objects. A **constructor** is a special member function that is automatically called when an object of the class is created. It is typically used to initialize data members.

* Class: A structure to group variables and functions logically.
* Object: An instance of a class.
* Constructor: Automatically invoked function used for initialization.
* cin / cout: Standard input/output objects in C++ for reading from and writing to the console.
* Access specifiers: `public` and `private` define access levels for members.

Algorithm:

1. Start
2. Define a class named `student` with private data members:

   * `rno` (integer) for Roll Number
   * `name` (string) for Name
   * `fee` (float) for Fee
3. Declare a constructor to:

   * Prompt the user to enter roll number, name, and fee
   * Store these values in the respective data members
4. Define a `display()` function to output the entered student details
5. In the `main()` function:

   * Create an object of the `student` class (`s1`)
   * Call the `display()` method to show student details
6. End


Conclusion:

The program successfully demonstrates the use of a **constructor** in C++ to initialize object data at the time of creation. It also shows how to define and use **member functions** to display object data. This is a foundational concept in object-oriented programming and forms the basis for more complex OOP designs.



Program 2
Aim:

To implement a C++ program that uses a constructor defined inside the class to accept student details such as roll number, name, and fee, and display them using a member function.
Tools Used:

* Programming Language: C++
* Compiler/Platform: Programiz

  
Theory:

This program demonstrates fundamental concepts of object-oriented programming in C++, particularly the use of constructors. A constructor is a special member function automatically called when an object is created, used here to initialize the student’s roll number, name, and fee. The program uses a character array to store the student's name and standard input/output streams for interaction.

Algorithm:

1. Start
2. Define a class `student` with private data members: `rollno` (integer), `name` (character array), and `fee` (double).
3. Define a constructor inside the class to prompt the user and accept inputs for roll number, name, and fee.
4. Define a member function `display()` to print the stored student information.
5. In the `main()` function:

   * Create an object of class `student` which automatically calls the constructor.
   * Call the `display()` method to display the student details.
6. End

 Conclusion:

The program effectively illustrates the use of constructors defined inside a class to initialize data members at object creation. It also demonstrates basic input and output handling using character arrays and simple member functions in C++. This helps in structuring code better using object-oriented principles.


Program 3
Aim:

To write a C++ program demonstrating the use of a **default constructor** that initializes data members with predefined values and displays them.

Tools Used:

* Programming Language: C++
* Compiler/Platform: Programiz

Theory:

A **default constructor** is a constructor that takes no arguments and is automatically called when an object is created. It initializes the object’s data members with default values. In this program, the default constructor initializes two integer members `x` and `y` to 5 and 10 respectively. The `show()` function is used to display these values.

Algorithm:

1. Start
2. Define a class `DefaultConst` with private data members `x` and `y`.
3. Define a default constructor that initializes `x` to 5 and `y` to 10.
4. Define a member function `show()` to output the values of `x` and `y`.
5. In `main()`:

   * Create an object `d` of class `DefaultConst`, which calls the default constructor automatically.
   * Call the `show()` function to display the values of `x` and `y`.
6. End

 Conclusion:

The program successfully demonstrates the concept of a default constructor in C++. It shows how constructors initialize data members automatically when an object is instantiated, and how member functions can be used to display those initialized values. This is a basic example of object initialization in object-oriented programming.


Program 4

Aim:

To write a C++ program that demonstrates the use of a **parameterized constructor** for initializing object data members with user-defined values.

Tools Used:
* Programming Language: C++
* Compiler/Platform: Programiz

Theory:

A parameterized constructor is a constructor that accepts arguments to initialize data members of a class at the time of object creation. This allows flexibility to assign different values to different objects. In this program, the constructor takes two integer parameters and assigns them to the data members `x` and `y`. The `show()` member function is used to display these values.

Algorithm:

1. Start
2. Define a class `ParaConst` with private data members `x` and `y`.
3. Define a **parameterized constructor** that takes two integers `a` and `b`, and assigns them to `x` and `y` respectively.
4. Define a member function `show()` to print the values of `x` and `y`.
5. In the `main()` function:

   * Create object `p1` using the parameterized constructor with values `10` and `20`.
   * Call `p1.show()` to display its values.
   * Create another object `p2` with values `50` and `100`.
   * Call `p2.show()` to display its values.
6. End

Conclusion:

The program demonstrates the use of **parameterized constructors** in C++. It shows how different objects of the same class can be initialized with different values during creation. This enhances the flexibility and usability of object-oriented programming in real-world applications.







