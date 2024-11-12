#include <stdio.h>
int main()
{
    int a, b, i, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i = (a > b) ? a : b;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
        i++;
    }
    printf("The LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
