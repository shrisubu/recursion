 #include<stdio.h>
int main()

  {
    float a,b,c,d,r1,r2;
    printf("enter the value");
    scanf("%f%f%f",&a,&b,&c);
    
    d=b*b-4*a*c;
    if(d>0) 
    {
      
      printf("roots are real");
      r1=(-b+sqrt(d))/(2*a);
      r2=(-b-sqrt(d))/(2*a);

       printf("roots are %.2f and %.2f",r1,r2);


    }
       else if (d==0)

        {
            printf("the roots are real and equal ");
            r1=(-b)/(2*a);
            printf("the roots are real and equal %f",r1);
        }
       else 
       printf("the roots are imaginary");

  }