#include <stdio.h>

int main()
{
    int a[20], i, j, pos, n, value;
    printf("enter the number of elements");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the elements number %d :", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter the position");
    scanf("%d", &pos);

    for (i = 0; i < n; i++)
    {
        if (a[i] == pos)
        {
            pos = i;
            break;
        }
    }

    if (i == n)
    {
        printf("Element not found");
        return 0;
    }

    for (i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}
