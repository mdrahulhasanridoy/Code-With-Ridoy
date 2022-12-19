//find_the_sum_and_average_of_three_integers.c
//Author: Md. Rahul Hasan Ridoy
//Date: 19/12/2022
//Description: This is a simple program to find the sum and average of three integers

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b,c,sum;
    float average;

    //input the value of a,b,c
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);


    //variable initialization
    //find the sum and average
    sum = a+b+c;
    average = sum/3.0;//3.0 is float data type

    //print the value of sum and average
    printf("The sum of a,b,c is %d \n",sum);
    printf("The average of a,b,c is %f",average);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: 1 2 4
//Output: Enter the value of a: 1 
//        Enter the value of b: 2
//        Enter the value of c: 4
//        The sum of a,b,c is 7
//        The average of a,b,c is 2.333333
//Status: Working

//Note: float float = float
//      int float = float
//      float int = float
//      int int = int
//      int int int = int
//      int int float = float
//      float int int = float
//      float float int = float
//      float int float = float
//      int float int = float
//      int float float = float
//      float float float = float