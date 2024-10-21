#include<stdio.h>
int main()
{
   float a,b,c,d,e,sum;
   float per;
   printf("enter the marks of five subject");
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
   sum=a+b+c+d+e;
   per = sum/5;
   printf("per is %.2f%%",per);
     if(per>=90 && per<100)

       printf("\n your grade is A");
       else if(per>=80 && per<90)
       printf("\n your grade is B");
       else if(per>=60 && per<80)
       printf("\n your grade is C");
       else if(per<60)
       printf("\n your grade is D");
}