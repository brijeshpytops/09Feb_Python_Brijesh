/*

In C programming, a data type is a classification of the type of data that a variable or constant can hold.Data types specify the size and type of values that can be stored in variables, as well as the operations that can be performed on them. C supports a variety of data types, including basic data types such as integers, floating-point numbers, characters, and void, as well as derived data types such as arrays, pointers, structures, and unions.

Basic Data Types:

int: Used to store integer values. [10, 200]
char: Used to store single characters. ['s', 'c']
float: Used to store single-precision floating-point numbers. [30.56457657, 123.57885]
double: Used to store double-precision floating-point numbers. [30.6764, 567.46764]
void: Represents an empty data type. It is commonly used to specify that a function returns no value or to indicate that a pointer does not point to any specific type.

Derived Data Types:

Array: A collection of elements of the same data type stored in contiguous memory locations. {10,20,30,40}
Pointer: A variable that stores the memory address of another variable. Pointers are used for dynamic memory allocation and manipulation of memory addresses. *name
Structure: A user-defined data type that groups together variables of different data types under a single name. 

struct name_of_structure {
    char name[];
    float price;
    int page;
}

Union: A user-defined data type that allows different variables to be stored in the same memory location. Only one member of a union can be accessed at a time.
union name_of_structure {
    char name[];
    float price;
    int page;
}
*/