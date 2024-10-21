#include<stdio.h>
int main()
{
int r,n,k;
printf("enter the number");
scanf("%d",&n);
k=n;
while(k>9)
{
    n=k;
    k=0;
    while(n>0)
    {
        r=n%10;
        k=k+r*r;
        n=n/10;
    }
    
}
   if(k==1)
   {
       printf("happy number");
   }
   else
   {
       printf("not a happy number");
   }
   
    
}