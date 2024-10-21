/*#include<stdio.h>
void main()
{
  int i,n;
  printf("enter any number");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%dX%d=%d\n",i,n,i*n);
  }

}
*/


/*#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d",n,fact);
}
*/

/*#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf("%d",sum);
}
*/
#include<stdio.h>
void main()
{
    int i,n,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        flag=1;
    }
    else
    {
        for(i=2;i<=(n/2);i++)
        {
            if(n%i==0)
        {
        flag=1;
        break;
        }
        }
    }
    if(flag==1)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }





    

}