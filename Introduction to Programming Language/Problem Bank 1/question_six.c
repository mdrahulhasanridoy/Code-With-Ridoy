//question_six.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Question Six : Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.

#include<stdio.h>
int main()
{
    //variable declaration
    int a;

    //Create a message to take input from the user
    printf("Enter an integer: ");

    //variable initialization
    scanf("%d", &a);

    //print the value
    printf("The value is %d", a);

    //end of the program
    return 0;
}

//Input: 10%
//Output: The value is 10