#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum up to %d is %d\n", n, sum);
    return 0;
}
