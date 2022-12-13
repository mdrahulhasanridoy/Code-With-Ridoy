// input.c
//Author: Md. Rahul Hasan Ridoy
//Date: 13/12/2022
//Description: This is a simple program to take input from the user in C language

#include<stdio.h>
int main()
{
    //variable declaration
    //variable is a name given to a memory location
    //variable is a container to store data
    //int is a keyword
    //a is a variable name
    //int a; is a variable declaration
    //int a; is a statement
    //int a; is a declaration statement
    //int is a data type
    //int is called integer data type
    int a; //a is a variable of type integer
    //; is a statement terminator
    //statement terminator is a symbol which is used to terminate a statement
    //; is called semicolon
    //semicolon is a statement terminator

    printf("Enter a number: ");
    //Create message to take input from the user

    //variable initialization
    //variable initialization is a process of assigning a value to a variable
    //if a variable is not initialized then it will contain garbage value
    //garbage value is a value which is not meaningful
    //garbage value is a value which is not assigned by the user, compiler, operating system, hardware
    //scanf is a function
    //scanf is a predefined function
    //predefined function is a function which is already defined by the compiler
    //scanf is a library function
    //scanf is a function which is defined in stdio.h header file
    //scanf is a function which is used to take input from the user
    scanf("%d",&a); //&a is the address of a
    //%d means integer input from the user will be stored in a
    //& is a reference operator
    //& called ampersand
    //%d is the format specifier for integer
    //format specifier is a symbol which is used to specify the type of input
    //"" is a string literal
    //"" is called double quotes
    //string literal is a sequence of characters enclosed in double quotes
    printf("Value of a is %d",a);
    //printf is a function
    //%d means integer value of a will be printed
    //, is a separator
    //, is called comma
    //, is used to separate two or more statements

    return 0;
}

//comments are ignored by the compiler
//comments are used to make the code more readable, understandable
//comments are used to explain the code
//comments are used to document the code
//comments are used to debug the code
//comments are used to disable the code
//comments are used to enable the code
//comments are used to remove the code
//comments are used to add the code
//comments are used to modify the code

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Output: 10
//Status: Working