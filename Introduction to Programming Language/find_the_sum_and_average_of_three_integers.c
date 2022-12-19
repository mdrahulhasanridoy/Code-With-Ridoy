//find_the_sum_and_average_of_three_integers.c
//Author: Md. Rahul Hasan Ridoy
//Date: 19/12/2022
//Description: This is a simple program to find the sum and average of three integers

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b,c,sum,average;

    //Create message to take input from the user
    printf("Enter the three numbers: ");

    //variable initialization
    scanf("%d %d %d",&a,&b,&c);

    //process of finding the sum and average of three integers
    sum = a+b+c;
    average = sum/3;

    //process of printing the sum and average of three integers
    printf("The sum of three numbers is %d\n",sum);
    printf("The average of three numbers is %d",average);

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: 10 20 30
//Output: The sum of three numbers is 60
//        The average of three numbers is 20
//Status: Working
