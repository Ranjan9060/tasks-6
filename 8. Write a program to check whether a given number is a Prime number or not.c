#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a Number:");

    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            break;
        }

    }
    if(i==num)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    return 0;
}