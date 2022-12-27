//if_else.c
//Author: Md. Rahul Hasan Ridoy
//Date: 24/12/2022
//Description: This is a simple program to find whether a number is even or odd in C language using if else statement.

#include<stdio.h>
int main()
{
    int x;//variable declaration
    printf("Enter an integer: ");//Create a message to take input from the user
    scanf("%d", &x);//variable initialization
    //check whether the number is even or odd
    if(x%2==0) //if is used for executing the code if the condition is true
    {
        printf("The number is even");
    }
    else //else is used for executing the code if the condition is false
    {
        printf("The number is odd");
    }
    return 0;
}

//Input: 5
//Output: The number is odd
//Input: 6
//Output: The number is even