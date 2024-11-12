#include <stdio.h>
int fibonacci(int n)
{
    int a = 0, b = 1, c;

    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci of %d is %d\n", n, fibonacci(n));
    return 0;
}
