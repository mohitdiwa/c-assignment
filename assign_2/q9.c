//9. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number ");
    scanf("%d",&a);
    b=a%10;
    b=a-b;
    printf("The no after  last digit zero %d",b);
    return 0;
}