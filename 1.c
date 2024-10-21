/*#include<stdio.h>
int main()
{
    int n,i,a,r,d=0;
    for(i=100;i<1000;i++)
    {
        a=i;
        while(a>0)
        {
            r=a%10;
            d=d+(r*r*r);
            a=a/10;

        }
        if(d==i)
        printf("\n armstrong number=%d",d);
        d=0;
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=4;k++)
    {
        for(l=4;l>=k;l--)
        printf("*");
    
    printf("\n");
    }
}