//remainder.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Description: This program will show how to find the remainder of a number.

#include<stdio.h>
int main()
{
    int number = 11;

    int remainder = number % 2;// % is called modulus operator

    printf("11 is divided by 2 and the remainder is %d", remainder);

    return 0;
}

//Output: 11 is divided by 2 and the remainder is 1
//Status: Working