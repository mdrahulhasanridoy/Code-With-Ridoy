//data_type
//Author: Md. Rahul Hasan Ridoy
//Date: 19/12/2022
//Description: This is a simple program to show the data type in C language

#include<stdio.h>
int main()
{
    //data types : int, float, double, char, long, short, long long, long double
    //integer data numbers : 1,2,3,4,5,6,7,8,9,10,11,12,13,14,......
    //float data type numbers : 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10, 11.11, 12.12, 13.13, 14.14, ......
    
    //variable declaration
    int a = 10.5;//integer data type
    float b = 10.5;//float data type

    //print the value of a and b
    printf("The value of a is %d \n",a);//%d use for integer data type
    printf("The value of b is %f",b);//%f use for float data type

    //end of the program
    return 0;
}

//Compiler: gcc 6.3.0
//Version: 1.0.0
//Input: None
//Output: The value of a is 10
//        The value of b is 10.500000
//Status: Working
//Note: The value of a is 10 because the value of a is 10.5 but the value of a is integer data type so the value of a is 10
//      The value of b is 10.500000 because the value of b is 10.5 and the value of b is float data type so the value of b is 10.5

