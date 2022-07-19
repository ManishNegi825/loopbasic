/*Write a program to check whether a given number is a Prime number or not */
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
        printf("Entered number is not an prime number ");
        break;
        }
    }
    if(num==i)
        printf("\n entered number is a prime number");
    
    return 0;
    
}