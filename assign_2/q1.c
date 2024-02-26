//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int u,s;
    printf("enter a number ");
    scanf("%d",&s);
    u=s%10;
    printf("the unit digit of the number is %d",u);
    return 0;
}