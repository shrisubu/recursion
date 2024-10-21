#include<stdio.h>
void main()
{

   float a,b,c;
   printf("enter the three sides of triangle");
   scanf("%f%f%f",&a,&b,&c);
   if((a+b)>c)
     {
       if(a==b && b==c) 
       {
       printf("EQUILATERAL TRIANGLE");
       }
       else if(a==b||b==c||c==a)
       {
       printf("ISOSCELES TRIANGLE");
       }
       else
       {
       printf("SCALENE TRIANGLE");
       } 
     }
     else
     printf("not a valid number");



}