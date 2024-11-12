#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("%d ", k + 1);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (int i = 5; i > 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            printf("%d ", k + 1);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (k == 0 || i == 5 || k == i - 1)
            {
                printf("%d ", k + 1);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        for (int j = i; j <= 2 * i - 1; j++)
        {
            printf("%d ", j);
        }

        for (int j = 2 * i - 2; j >= i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    
    return 0;
}