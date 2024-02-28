#include<stdio.h>
int main()
{
    int i;
   for(i=10;i>=1;i--)
    {
        if((i&1)==1)
       printf("%d",i);
        else
         printf("");

    }
    return 0;
}