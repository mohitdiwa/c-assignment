#include<stdio.h>
int main()
{
    int i;
   for(i=1;i<=10;i++)
    {
        if((i&1)==0)
       printf("%d",i);
        else
         printf("");

    }
    return 0;
}