#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
    
    {
        printf("upper case character");
    }

else if(ch>=97 && ch<=122)
{
    printf("lower case character");
}

return 0
}