#include<stdio.h>
int main()
{
    int i,j,k=0,a[10],b[10],c[20],n,m;
    printf("enter the element of first array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the element of second array :");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        printf("enter the %d element",j+1);
        scanf("%d",&b[j]);
    }
    while(i<n && j<m)
    {
    i=0;
    j=0;
    if(a[i]<=b[j])
    {
        c[k]=a[i];
        i++;
        k++;

    }
    else if(b[j]<a[i])
    {
        c[k]=b[j];
        j++;
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    }
    int l;
    l=m+n;
   for(k=0;k<l;k++){
   printf("%d\n",c[k]);}
    
}