//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter a number to check it is prime or not ");
    scanf("%d",&n);
   for(i=2;i<n;i++)
   {
     if(n%i==0)
        {   c=1;
            break;
         }
   }

   if(c==0)
   printf("prime");
   else
   printf("not prime");

return 0;
}

