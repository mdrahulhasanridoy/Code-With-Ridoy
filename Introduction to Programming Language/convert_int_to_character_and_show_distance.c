//convert_int_to_character_and_show_distance.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Description: This program will show how to convert int to character and show the distance between two ASCII value.


#include<stdio.h>
int main()
{
    //variable declaration
    int a, b;

    //variable initialization
    scanf("%d %d", &a, &b);

    //print the character and its ASCII value
    printf("The Character is '%c' and '%c' and the distance between them is %d", a, b, b-a);

    return 0;
}

//Input: 97 98
//Output: The Character is a and b and the distance between them is 1
//Status: Working