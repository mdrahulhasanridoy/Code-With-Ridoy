//input_two_numbers.c
//Author: Md. Rahul Hasan Ridoy
//Date: 13/12/2022
//Description: This is a simple program to take two input from the user in C language
//Compiler: gcc 6.3.0
//Output: 10 20
//Version: 1.0.0
//Status: Working

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b;

    //Create message to take input from the user
    printf("Enter two numbers: ");

    //variable initialization
    scanf("%d %d",&a,&b); 
    //&a and &b are the address of a and b
    //first %d is stored in a
    //second %d is stored in b

    //process of printing two numbers
    printf("The value of a is %d\n",a);
    //%d is replace by a
    printf("The value of b is %d",b);
    ////%d is replace by b

    return 0;
    //return 0 means the program is successfully executed
}

