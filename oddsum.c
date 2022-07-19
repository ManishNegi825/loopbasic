/*Write a program to calculate sum of first N odd natural numbers*/
#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       i++;
       sum+=i;
    }
    printf("%d",sum);
    return 0;
}