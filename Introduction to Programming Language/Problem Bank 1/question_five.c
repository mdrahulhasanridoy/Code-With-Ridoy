//question_five.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Question Five : Write a C program to take a character variable and input and show the corresponding ASCII value of that character

#include<stdio.h>
int main()
{
    //variable declaration
    char a;

    //Create a message to take input from the user
    printf("Enter a character: ");

    //variable initialization
    scanf("%c", &a);

    //print the ASCII value of that character
    printf("The ASCII value of %c is %d", a, a);

    //end of the program
    return 0;
}

//Input: a
//Output: The ASCII value of a is 97
//Status: Working