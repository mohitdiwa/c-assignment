//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter a number");
    scanf("%d",&n);
    n=n*2;
    for(i=0;i<=n;i++)
    {
        if((i&1)==1)
            a=a+i;
        else 
            continue;
         
    }
    printf("%d",a);
    return 0;

}