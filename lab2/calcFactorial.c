#include <stdio.h>
int main()
{
    int n, result = 1;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("%d", result);
}