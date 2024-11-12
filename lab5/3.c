#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Average of two numbers is: %.2f", (a + b) / 2.0);

    return 0;
}
