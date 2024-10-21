#include<stdio.h>
int main ()
{
    int u;
    float bill;
    printf("enter the total unit");
    scanf("%d",&u);
    if(u<=50)
    {
        bill=u*0.50;
    }
    else if(u<=150)
    {
        bill=25+(u-50)*0.75;
    }
    else if(u<=250)
    {
        bill=100+(u-150)*1;
    }
    else
    {
        bill=200+(u-250)*1.5;
    }

    printf("the total bill is %f",bill);
}