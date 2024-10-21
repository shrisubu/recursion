//area of rectangle
/*
#include<stdio.h>
int area_rec(int,int);
void main()
{
    int l,b,a;
    printf("enter the length and breadth ");
    scanf("%d%d",&l,&b);
    a=area_rec(l,b);
    printf("the area of rectangle is %d",a);
}
int area_rec(int c,int d)
{
  return c*d;
}
*/
//fibonacci
/*
#include<stdio.h>
int fib(int);
void main()
{
    int terms,i;
    printf("enter the terms");
    scanf("%d",&terms);
    for(i=0;i<terms;i++)
    {
        printf("%d\t",fib(i));
    }
}
  int fib(int i)
  {
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return fib(i-1)+fib(i-2); 
  }
  */

 //factorial using tail recursion
 /*
 #include<stdio.h>
 int fact(int);
 int main()
 {
    int n,f;
    printf("enter the number");
    scanf("%d",&n);

    f=fact(n);
    printf("the factorial of %d is %d",n,f);
    return 0;
 }
 int fact(int num)
 {
    if(num==1)
    return 1;
    else 
    return num*fact(num-1);
 } 
 
*/

// highest common factor
/*
#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    printf("the hcf of %d and %d is %d",a,b,hcf(a,b));

}
int hcf(int n1,int n2)
{
if(n2==0)
return 0;
else
return hcf(n2,n1%n2);
}
*/

// call by value
/*
#include<stdio.h>
void swap(int,int);
void main()
{
    int a=5,b=6;
    printf("the value before swapping a=%d and b=%d",a,b);
    swap(a,b);
    printf("the value after swapping a=%d and b=%d",a,b);


}
void swap(int p, int q)
{
    int t;
    t=p;
    p=q;
    q=t;
}
*/

/*
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a=5,b=6;
    printf("the value before swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("the value after swapping a=%d and b=%d",a,b);


}
void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
*/
//palindrome number
/*
#include<stdio.h>
 int palind(int);
 int main()
 {
    int n,p;
    printf("enter the number");
    scanf("%d",&n);

    p=palind(n);
    if(p==n)
    printf("palindrome");
    else
    printf("not a palindrome");
 }
 int palind(int n)
 {
    int r,d=0;
    while (n>0)
    {
        r=n%10;
        d=d*10+r;
        n=n/10;
    }
    return d;

 } 
 */

#include<stdio.h>
 int (int);
 int main()
 {
    int n,p;
    printf("enter the number");
    scanf("%d",&n);

    p=palind(n);
    if(p==n)
    printf("palindrome");
    else
    printf("not a palindrome");
 }
 int palind(int n)
 {
    int r,d=0;
    while (n>0)
    {
        r=n%10;
        d=d*10+r;
        n=n/10;
    }
    return d;

 } 
