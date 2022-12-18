//find_the_area_of_a_triangle_given_its_base_and_height.c
//Author: Md. Rahul Hasan Ridoy
//Date: 18/12/2022
//Description: This is a simple program to find the area of a triangle in C language

#include<stdio.h>
int main()
{
    //variable declaration
    int base,height;

    //Create message to take input from the user
    printf("Enter the base of the triangle: ");
    scanf("%d",&base);//variable initialization

    //Create message to take input from the user
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);//variable initialization

    //variable declaration
    float area;//float is a date type

    //process of finding the area of a triangle
    area = 0.5 * base * height;

    //print the area of a triangle
    printf("The area of the triangle is %f",area);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: Enter the base of the triangle: 10
//       Enter the height of the triangle: 10
//Output: The area of the triangle is 50.000000
//Status: Working
