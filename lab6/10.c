#include <stdio.h>

void printTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n = 5; // You can change this value to print a larger or smaller triangle
    printTrianglePattern(n);
    return 0;
}
