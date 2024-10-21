/*
#include <stdio.h>
void main()
{
    int n, a[20], i, j, temp;
    printf("enter the number of array element");
    scanf("%d", &n);
   
    for (i = 0; i < n; i++)
    {
        printf("the array element %d is :",i+1);
        scanf("%d", &a[i]);
    }
    // sorting process
    for (i = 1; i < n - 1; i++)
    {
        for (j = 0; j <= n-i-1 ; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("the array element after sorting");
    for (i = 0; i < n ; i++)
        printf("%d\n", a[i]);
}
*/

#include <stdio.h>
void main()
{
    int n, a[20], i, j, temp,pos,swap;
    printf("enter the number of array element");
    scanf("%d", &n);
   
    for (i = 0; i < n; i++)
    {
        printf("the array element %d is :",i+1);
        scanf("%d", &a[i]);
    }

   for(i=0;i<n;i++)
   {
    pos=i;
    for(j=i+1;j<n;j++)
    {
        if(a[pos]>a[j])
        {
            pos=j;

        }
        if(pos!=i)
        {
          swap=a[i];
          a[i]=a[pos];
          a[pos]=swap;
        }

    }
    
   

   }
   printf("the array element after sorting");
    for (i = 0; i < n ; i++)
        printf("%d\n", a[i]);

}