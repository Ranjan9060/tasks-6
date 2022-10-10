#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter a Number :");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
      sum=sum+2*i;
    }

    printf("Sum of First N even natural Numbers: %d",sum);

    return 0;

}