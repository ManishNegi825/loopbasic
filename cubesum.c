/*Write a program to calculate sum of squares of first N natural numbers*/
#include<stdio.h>
int main ()
{
    int i,n,sum=0,sumsquare=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=i*i*i;
       sumsquare+=sum;
    }
    printf("%d",sumsquare);
    return 0;
}