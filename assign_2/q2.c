//2. Write a program to print a given number without its last digit.

/*#include<stdio.h>
int main()
{
    int u,n,m;
    printf("Enter a number ");
    scanf("%d",&u);
    n=u%10;
    m=u-n;
    printf("number without its last digit %d",m);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int u,n;
    printf("Enter a number ");
    scanf("%d",&u);
    n=u/10;
    printf("number without its last digit %d",n);
    return 0;
}