#include<stdio.h>

int main()
{
int num,temp,first,last,n=1;
printf("Enter the Number: ");
scanf("%d",&num);
temp=num;
last=num%10;
while(num>0)
   {
    first=num%10;
    num=num/10;
    n=n*10;
   }
   n=n/10;
  temp=temp-last;
  temp=temp+first;
  temp=temp-(first*n);
  temp=temp+(last*n);
printf("The New Number After Swapping First & Last Digit is %d ",temp);
return 0;
}
