#include <stdio.h>

int main()
{
    int x, y, tempvar;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("x = %d, y = %d\n", x, y);
    tempvar = x;
    x = y;
    y = tempvar;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}