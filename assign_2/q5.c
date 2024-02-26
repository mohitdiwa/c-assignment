//5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a three digit number ");
    scanf("%d",&a);
    b=a%10;//b=3, a=123
    a=a/10;//a=12
    b=(a%10) + b;//b= 5
    a=a/10;//a=1;
    b= a+ b;//6
   printf("the sumof the three digit number is %d",b);
    return 0;
}