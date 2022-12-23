//mixed_input.c
//Author: Md. Rahul Hasan Ridoy
//Date: 23/12/2022
//Description: This program will show how to write int and char in a single line & duo line.

#include<stdio.h>
int main()
{
    int a;
    char c;

    scanf("%d %c", &a, &c);
    //scanf("%d", &a);
    //scanf(" %c", &c); must use space before %c to avoid error

    printf("%d %c", a, c);

    return 0;
}

//Input: 1 a
//Output: 1 a
//Status: Working