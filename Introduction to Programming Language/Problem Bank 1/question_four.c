//question_four.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Question Five : Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.

#include<stdio.h>
int main()
{
    //variable declaration
    int a, b;

    //Create a message to take input from the user
    printf("Enter two positive integers: ");

    //variable initialization
    scanf("%d %d", &a, &b);

    //print the summation, subtraction and multiplication of those two numbers
    printf("Summation of %d and %d is %d\n", a, b, a+b);
    printf("Subtraction of %d and %d is %d\n", a, b, a-b);
    printf("Multiplication of %d and %d is %d", a, b, a*b);

    //end of the program
    return 0;
}

//Input : 20 10
//Output: Summation of 20 and 10 is 30
//        Subtraction of 20 and 10 is 10
//        Multiplication of 20 and 10 is 200
//Status: Working