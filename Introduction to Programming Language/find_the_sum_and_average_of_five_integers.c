//find_the_sum_and_average_of_five_integers.c
//Author: Md. Rahul Hasan Ridoy
//Date: 19/12/2022
//Description: This is a simple program to find the sum and average of five integers

#include<stdio.h>
int main()
{
    //variable declaration
    int a,b,c,d,e;

    printf("Enter the five integers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    //variable initialization
    //find the sum and average
    int sum = a+b+c+d+e;
    float average = (float)sum/5;//(float)sum; it's type casting
    //type casting : convert int to float
    //type casting is convert one data type to another data type

    //print the value of sum and average
    printf("The sum of a,b,c,d,e is %d \n",sum);
    printf("The average of a,b,c,d,e is %f",average);

    //end of the program
    return 0;

}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: 1 1 2 3 4
//Output: Enter the five integers: 1 1 2 3 4
//        The sum of a,b,c,d,e is 11
//        The average of a,b,c,d,e is 2.200000
//Status: Working