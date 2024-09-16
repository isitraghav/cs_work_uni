#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Average of two numbers is: %.2f", (a + b) / 2.0);

    return 0;
}
