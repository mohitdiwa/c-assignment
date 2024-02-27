//1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a numebr to check it is positive or non positive");
    scanf("%d",&a);
    if(a>0)
    printf("Positive");
    else
    printf("negative");
    return 0;
}