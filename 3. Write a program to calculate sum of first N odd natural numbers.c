#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter a Number :");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i*2-1;
    }

    printf("Sum of First N odd natural Numbers: %d",sum);

    return 0;
    
}