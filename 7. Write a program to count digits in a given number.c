#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter a Number :");

    scanf("%d",&num);

    while(num!=0)
    {
        num%10;

        num=num/10;

        count++;
    }

    printf("Count Digits in a Given Number: %d",count);
    
    return 0;

}