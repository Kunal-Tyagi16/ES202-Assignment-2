#include<stdio.h>
int main()
{
    long long int n,s,ar[10];
    printf("Enter the number: ");
    scanf("%lld",&n);
    for(int i=0;i<10;i++)
    {
        ar[i]=0;
    }
    while(n>0)
   {
    s=n%10;
    n=n/10;
    ar[s]++;
   }
   for(int i=0;i<10;i++)
   {
    printf("Frequency of %d : %lld\n",i,ar[i]);
   }
return 0;
}
