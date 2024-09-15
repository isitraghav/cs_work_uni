#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
            sum += i;
        i++;
    }
    printf("The sum of all even numbers from 1 to %d is %d\n", n, sum);
}
