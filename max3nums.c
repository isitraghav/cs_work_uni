#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers (12, 0, 24): ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("Maximum of three numbers is: %d\n", max);

    return 0;
}
