#include<stdio.h>
int main()
{
    int a[20],n,i,mid,beg,end,val;
    printf("enter the number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element number %d :",i+1);
        scanf("%d",&a[i]);

    }
    printf("enter the value to be searched");
    scanf("%d",&val);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && val!=a[mid])
    {
        if(a[mid]<val)
        beg=mid+1;
        if(a[mid]>val)
        end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==val)
    printf("the value %d is found at %d position",val,mid+1);
    else
    printf("uncessfull search");

}