//find_the_area_of_a_triangle_given_its_sides.c
//Author: Md. Rahul Hasan Ridoy
//Date: 18/12/2022
//Description: This is a simple program to find the area of a triangle in C language

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b,c;

    //Create message to take input from the user
    printf("Enter the first side of the triangle: ");
    scanf("%d",&a);//variable initialization

    //Create message to take input from the user
    printf("Enter the second side of the triangle: ");
    scanf("%d",&b);//variable initialization

    //Create message to take input from the user
    printf("Enter the third side of the triangle: ");
    scanf("%d",&c);//variable initialization

    //variable declaration
    float s,area;//float is a date type

    //process of finding the area of a triangle
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    //print the area of a triangle
    printf("The area of the triangle is %f",area);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: Enter the first side of the triangle: 10
//       Enter the second side of the triangle: 10
//       Enter the third side of the triangle: 10
//Output: The area of the triangle is 43.301270
//Status: Working