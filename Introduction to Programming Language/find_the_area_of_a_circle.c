//find the area of a circle.c 
//Author: Md. Rahul Hasan Ridoy
//Date: 18/12/2022
//Description: This is a simple program to find the area of a circle in C language

#include<stdio.h>
int main()
{
    //variable declaration
    int radius;

    //Create message to take input from the user
    printf("Enter the radius of the circle: ");

    //variable initialization
    scanf("%d",&radius);

    //variable declaration
    float area;//float is a date type

    //process of finding the area of a circle
    area = 3.14159 * radius * radius;

    //print the area of a circle
    printf("The area of the circle is %f",area);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: Enter the radius of the circle: 10
//Output: The area of the circle is 314.158997
//Status: Working