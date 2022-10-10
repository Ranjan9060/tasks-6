#include<stdio.h>
int main()
{
    int num,i,fact=1;

    printf("Enter a Number:");

    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
       fact=fact*i;
    }

    printf("Factorial of a Number: %d",fact);

    return 0;
}