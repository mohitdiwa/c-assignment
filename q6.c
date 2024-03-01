//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a numebr to calculate it factorial");
    scanf("%d",&n);
    for(i=n-1;i>=1;i--)
    {
        n=n*i;
    }
    printf("%d",n);
    return 0;
}