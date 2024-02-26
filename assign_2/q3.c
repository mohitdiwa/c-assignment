//3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,m,t; //a=2,m=3
    printf("enter 2 number ");
    scanf("%d %d",&a,&m);
     t=a;//t=2
     a=m;//a=3
     m=t;//m=2
    printf("The number %d%d after swyap is %d%d",t,a,a,t);
    return 0;

}
