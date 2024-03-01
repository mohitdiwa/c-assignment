//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a number to calculate sq of first N natural numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          c=c+(i*i);
    }
     printf("%d",c);
    return 0;

}