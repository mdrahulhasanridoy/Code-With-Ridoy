//distance_between_ASCII_value.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Description: This program will show how to find the distance between two ASCII value.

#include<stdio.h>
int main()
{
    //variable declaration
    char a, b;

    //variable initialization
    scanf("%c %c", &a, &b);

    //print the distance between two ASCII value
    printf("The distance between %c and %c is %d", a, b, b-a);

    //end of the program
    return 0;
}

//Input: a b
//Output: The distance between a and b is 1
//Status: Working