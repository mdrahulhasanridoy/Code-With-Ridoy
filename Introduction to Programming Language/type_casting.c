//type_casting.c
//Author: Md. Rahul Hasan Ridoy
//Date: 19/12/2022
//Description: This is a simple program about type casting
//             type casting is convert one data type to another data type

#include<stdio.h>
int main()
{
    float a;
    //Create message for user
    printf("Enter a float number: ");
    //Take input from user
    scanf("%f",&a);

    int b = (int)a;//type casting : convert float to int

    //print converted integer value from float
    printf("The integer value of %f is %d",a,b);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: 2.5
//Output: Enter a float number: 2.5
//        The integer value of 2.500000 is 2
//Status: Working

