#include <stdio.h>

int main()
{
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    int modulus = a%3;
    printf("the modulus is %d", modulus);
    return 0;
}