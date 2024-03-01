//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int a,n,c=0;
    printf("enter a number to count the digit in it");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
    return 0;

}