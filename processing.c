//processing.c
//Author: Md. Rahul Hasan Ridoy
//Date: 13/12/2022
//Description: This is a simple program to sum two numbers in C language

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b;

    //Create message to take input from the user
    printf("Enter two numbers: ");
    
    //variable initialization
    scanf("%d %d",&a,&b);

    //variable declaration
    int sum;
    
    //process of summing two numbers
    sum = a + b;
    printf("The sum of two numbers is %d",sum);

    //end of the program
    return 0;
}

//Input: 10 20
//Output: The sum of two numbers is 30
//Status: Working