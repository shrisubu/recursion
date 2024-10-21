#include<stdio.h>
#include<string.h>
void main()
{
FILE *f1;
int n,i;
char ch[400],ch1;
f1=fopen("file1.txt","w");
printf("Enter the number of lines you want to enter in thhe file");
fflush(stdin);
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("enter the line number %d:-\n",i);
fflush(stdin);
fgets(ch,400,stdin);
fputs(ch,f1);
}
fclose(f1);
f1=fopen("file.txt","r");
while((ch1=fgetc(f1))!=EOF)
printf("%c",ch1);
}