#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number for factorial: ");
    scanf("%d", &input);
    int result = 1;
    while (input != 1)
    {
        result = result * input;
        input--;
    }

    printf("%d", result);
}