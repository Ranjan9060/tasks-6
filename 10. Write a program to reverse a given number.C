#include<stdio.h>
int main()
{
    int num,rev,store=0;

    printf("Enter a Number:");

    scanf("%d",&num);

   while(num!=0)
   {
      rev=num%10;

      store=store*10+rev;

      num=num/10;

   }
   printf("Reverse a Given Number : %d",store);

   return 0;
}