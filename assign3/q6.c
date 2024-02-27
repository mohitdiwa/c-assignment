//6. Write a program to print greater between two numbers. Print one number if both are
//the same.
#include<stdio.h>
int main()

{
    int a,b;
    printf("enter a numbe to find bt 2 number ");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("a is b %d",a);
    else
    {
        if(a>b)
        printf("a is g  %d",a);
        else
        printf("b is g %d",b);
    }
     return 0;
}