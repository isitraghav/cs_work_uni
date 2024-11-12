#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maximum of two numbers is: %d\n", a);
    } else {
        printf("Maximum of two numbers is: %d\n", b);
    }

    return 0;
}
