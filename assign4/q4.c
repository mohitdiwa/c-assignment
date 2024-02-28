//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i;
   for(i=1;i<=10;i++)
    {
        if((i&1)==1)
       printf("%d",i);
        else
         printf("");

    }
    return 0;
}