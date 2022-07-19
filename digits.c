/*Write a program to count digits in a given number*/
#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter a number ");
    scanf("%d",&num);
   for(i=1;num!=0;i++)
   {
    num=num/10;
    count++;
   }
   printf("The number entered has digits : %d",count);
    return 0;
}