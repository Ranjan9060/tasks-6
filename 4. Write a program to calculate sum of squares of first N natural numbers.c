#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter a Number :");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i*i;
    }

    printf("Sum of Squares of First N natural Numbers: %d",sum);
    
    return 0;
}