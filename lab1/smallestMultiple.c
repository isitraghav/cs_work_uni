#include <stdio.h>

int main()
{
    int i = 256;
    int j = 7;
    printf("Enter i:");
    scanf("%d", &i);
    printf("Enter j:");
    scanf("%d", &j);
    int counter = 1;
    int multiplyer = 0;
    while (counter <= i)
    {
        multiplyer++;
        counter = j * multiplyer;
    }
    printf("%d\n", counter);
}   
