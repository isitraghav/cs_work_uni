#include <stdio.h>

int main()
{
    int count = 1;
    int factors = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (count <= n)
    {
        if (n % count == 0)
        {
            factors++;
        }
        count++;
    }
    if (factors == 2 || factors == 1)
    {
        printf("%d is a prime and has %d factors", n, factors);
    }
    else
    {
        printf("%d is not a prime and has %d factors", n, factors);
    }

    return 0;
}
