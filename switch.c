/*
#include<stdio.h>
void main()
{

 int month;
 printf("enter any number from 1 to 12");
 scanf("%d",&month);
 switch(month)
{

           case 1 :printf("january");
           break;

           case 2 :printf("february");
           break;

           case 3 :printf("march");
           break;

           case 4 :printf("april");
           break;
           case 5 :printf("may");
           break;

           case 6 :printf("june");
           break;
           case 7 :printf("july");
           break;
           case 8 :printf("august");
           break;
           case 9 :printf("september");
           break;
           case 10 :printf("october");
           break;
           case 11 :printf("november");
           break;
           case 12 :printf("december");
           break;
           

}






}
*/

#include<stdio.h>
int main()
{

  int a,x,b,n;
  float y;
  printf("enter the values");
  scanf("%d%d%d",&a,&x,&b);
  printf("enter your choice from 1 to 4");
  scanf("%d",&n);
        
  switch(n)
     
     {
        case 1 : y=a*x%b;
         printf(" y=a*x%%b \t y=%f",y);
         break;

         case 2: y=a*x*x+b*b;
         printf("y=a*x*x+b*b \t y=%f",y);
         break;

         case 3: y=a-b*x;
         printf("y=a-b*x \t y=%f",y);
         break;

         case 4: y=a+(float)x/b;
         printf("y=a+(float)x/b \t y=%f",y);
         break;

          





     }


}
/*
#include<stdio.h>
void main()
{
 int age;
 char gender,status;
 printf("enter your age");
 scanf("%d",&age);
 printf("enter your gender and status");
 fflush(stdin);
 scanf("%c %c",&gender,&status);

 if(status=='M'||status=='m')
 {
    printf("driver is insured");
 }
  
  else if((gender=='M'|| gender=='m')&&age>30)
  {
    printf("driver is insured");
  }

    else if((gender=='F'||gender=='f')&&age>25)
   {
    printf("driver is insured");
   }
   
   else
   {
    printf("not insured");
   }





}
*/