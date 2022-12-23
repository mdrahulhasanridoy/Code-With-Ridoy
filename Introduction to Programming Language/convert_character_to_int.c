//convert_character_to_int.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Description: This program will show how to convert character to ASCII value.

#include<stdio.h>
int main()
{
    //variable declaration
    char c;

    //variable initialization
    scanf("%c", &c);

    //print the character and its ASCII value
    printf("The Character is %c and the ASCII value is %d", c, c);

    return 0;
}

//Input: a
//Output: The Character is a and the ASCII value is 97
//Status: Working