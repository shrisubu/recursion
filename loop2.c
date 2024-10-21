#include<stdio.h>
int main()
{
 int a=0,b=1,c=0,i,n;
 printf("enter the number of terms");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   printf("%d",c);
   a=b;
   b=c;
   c=a+b;

 }
 return 0;
}