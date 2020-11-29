#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,s,count=0;

    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
   {
    printf("No Of Digits : 1");
    exit(0);
   }
    while(n>0)
   {
    s=n%10;
    count++;
    n=n/10;
   }
    printf("No Of Digits : %d\n",count);
return 0;
}
