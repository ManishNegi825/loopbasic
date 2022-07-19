/*Write a program to calculate factorial of a number*/
#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter the value ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("Facorial of number %d is = %d",n , factorial);
    return 0;
}