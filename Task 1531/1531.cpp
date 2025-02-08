#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array1[n];
    int array2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array2[i] != array1[n - 1 - i])
        {
            printf("No\n");
            for (int j = 0; j < n; j++)
            {
                printf("%d ", array1[n - 1 - j]);
            }
            printf("\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
