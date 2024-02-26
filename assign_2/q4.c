//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;//a=1, b=2
    printf("enter two number to swap");
    scanf("%d %d",&a,&b);
    a=a+b;//a=3
    b=a-b;//b=1
    a=a-b;//a=2
    printf("the swap no is %d%d",a,b);
    return 0;
}