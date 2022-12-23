//question_two.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Question Two : Write a C program to declare two integer variables and set values 10 and 20 respectively. Now print the second number and then the first number.


#include<stdio.h>
int main()
{
    //variable declaration
    int a, b;

    //variable initialization
    a = 10;
    b = 20;

    //print the second number and then the first number
    printf("%d %d", b, a);

    return 0;
}

//Output: 20 10
//Status: Working