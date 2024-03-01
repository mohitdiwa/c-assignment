//1. Write a program to calculate sum of first N natural number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number to calculate sum of first N natural numbers");
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
          n=n+i;
    }
     printf("%d",n);
    return 0;

}