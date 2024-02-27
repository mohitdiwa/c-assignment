//5. Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a number to check it is 3 digit or not");
    scanf("%d",&a);
    if((a>99)&&(a<1000))
    printf("yes it is threee digit number ");
    else
    printf("no");
    return 0;
    
}