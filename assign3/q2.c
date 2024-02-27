//2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number to check it is divisible by 5 or not ");
    scanf("%d",&a);
    if (a%5==0)
    printf("yes it is divisible");
    else
    printf("the number is not divisible by 5");
    return 0;
}