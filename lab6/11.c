#include <stdio.h>

int main()
{
    int n = 5; // You can change this value to print a larger or smaller triangle
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}