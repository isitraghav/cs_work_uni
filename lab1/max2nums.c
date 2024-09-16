#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum of two numbers is: %d\n", a > b ? a : b);
}
