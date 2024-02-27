//9. Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 number to find the greatest among them");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("a i g");
    else if((b>a)&&(b>c))
        printf("b is g");
    else if((c>a)&&(c>b))
        printf("c is g");
    else if((a==b)&&(b==c)&&(a==c))
    printf("a");
    return 0;
    
}