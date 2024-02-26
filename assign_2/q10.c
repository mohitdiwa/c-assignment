//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number  and one more no to append to it");
    scanf("%d%d",&a,&b);//a=12,b=3
    c=a*10 +b;//c=123
    printf("the number after append is %d",c);
    return 0;

}