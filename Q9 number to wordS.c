#include<stdio.h>
int main()
{
    int n,s,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
   {
    s=n%10;
    rev=rev*10+s;
    n=n/10;
   }
   while(rev>0)
{
    s=rev%10;
    if(s==0)
    printf("Zero ");
    if(s==1)
    printf("One ");
    if(s==2)
    printf("Two ");
    if(s==3)
    printf("Three ");
    if(s==4)
    printf("Four ");
    if(s==5)
    printf("Five ");
    if(s==6)
    printf("Six ");
    if(s==7)
    printf("Seven ");
    if(s==8)
    printf("Eight ");
    if(s==9)
    printf("Nine ");
    rev=rev/10;
}
return 0;
}
