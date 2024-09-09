#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    int average = (a + b) / 2;
    printf("the average is %d", average);
    return 0;
}