#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a < b)
    {
        printf("b is greater than a");
    }
    else
    {
        printf("both are equal");
    }
}