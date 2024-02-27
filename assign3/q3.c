//3. Write a program to check whether a given number is an even number or an odd
//number.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number to checkit is even or odd number ");
    scanf("%d",&a);
    if((a&1)==0)
    printf("even");
    else
    printf("odd");
    return 0;
}