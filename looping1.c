#include<stdio.h>
#include<math.h>
void main()
{
  int i,n,x,fact=1;
  float sum=1;
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter the value of x");
  scanf("%d",&x);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    sum+=(pow(-1,i)*pow(x,i))/fact;

  }
  printf("the sum is= %f",sum);

}