#include<stdio.h>

int main()
{
int n,first,last;
printf("Enter the Number: ");
scanf("%d",&n);
last=n%10;
while(n>0)
   {
    first=n%10;
    n=n/10;
   }
printf("The first digit is %d and last digit is %d ",first,last);
return 0;
}
