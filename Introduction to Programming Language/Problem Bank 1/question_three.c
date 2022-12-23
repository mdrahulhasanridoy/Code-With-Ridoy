//question_three.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Question Three : Write a C program to take one positive integer as input and print double of it.

#include<stdio.h>
int main()
{
    //variable declaration
    int a;

    //Create a message to take input from the user
    printf("Enter a positive integer: ");

    //variable initialization
    scanf("%d", &a);

    //print double of it
    printf("Double of %d is %d", a, a*2);

    //end of the program
    return 0;
}

//Input: 10
//Output: Double of 10 is 20
//Status: Working