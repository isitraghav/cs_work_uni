#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (counter <= n)
    {
        printf("%d\n", counter);
        counter++;
    }

    return 0;
}