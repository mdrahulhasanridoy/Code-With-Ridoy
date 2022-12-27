//x_greater_than_y.c
//Author: Md. Rahul Hasan Ridoy
//Date: 24/12/2022
//Description: This is a simple program to find out which number iis greater than thre other in C language using if else statement.

#include<stdio.h>
int main()
{
    int x,y;//variable declaration
    //Create a message to take input from the user
    printf("Enter first integer: ");
    scanf("%d", &x);//variable initialization
    printf("Enter second integer: ");
    scanf("%d", &y);//variable initialization
    //check the number 
    if(x>y)
    {
        printf("%d is greater than %d", x, y);
    }
    else
    {
        printf("%d is greater than %d", y, x);
    }
    return 0;
}

//Input: 5 6
//Output: 6 is greater than 5
//Input: 6 5
//Output: 6 is greater than 5