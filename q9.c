#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    printf("enter a number to reverse");
    scanf("%d",&n);
    while(n !=0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("reverse number is %d",b);
    return 0;



}