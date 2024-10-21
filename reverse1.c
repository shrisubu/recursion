#include<stdio.h>
int main()
{
    int n,digit,rev=0;
    printf("enter the number to be reversed");
    scanf("%d",&n);
    digit=n%10;
    rev = rev*10+digit;
    n=n/10;
    digit=n%10;
    rev= rev*10+digit;
    n=n/10;
    rev =rev*10+n;
    printf("%d",rev);
    return 0;


}