#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;
    int i = 0;
    printf("The Fibonacci series is: ");
    while (i < 10)
    {
        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
        i++;
    }
}
