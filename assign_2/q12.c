//12. Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Entr a 3 digit no ");
    scanf("%d",&a);//a=123
    b=a%10;//b=3
    a=a/10;//a=12
    b=b*100+a;//b=312
    printf("The number after right shift is %d",b);
    return 0;
    

}