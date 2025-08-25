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

