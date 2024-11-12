#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    double result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);
    result = pow(x, n);
    printf("%d to the power of %d is %f\n", x, n, result);

    return 0;
}
