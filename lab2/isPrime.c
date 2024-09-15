#include <stdio.h>

int main()
{
    int n, i = 1, factors = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
            factors++;
        i++;
    }
    if (factors > 2)
        printf("%d is not a prime number\n", n);
    else
        printf("%d is a prime number\n", n);
    return 0;
}
