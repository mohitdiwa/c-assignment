//11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
//and convert it into USD.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the inr to convert it to usd");
    scanf("%f",&a);
    b=(1/76.23)*a;
    printf("the usd ammount is %f",b);
    return 0;
}