#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter Number of elements");
    scanf("%d", &n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);
    
        if (a[i] == target)
        {
            printf("Element is found at index position %d", i + 1);
            
        }

        else
        {
            printf("Element is not found");
            
        }
    }
