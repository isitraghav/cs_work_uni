#include <stdio.h>

int main()
{
    int num, hundred = 0, fifty = 0, ten = 0, five = 0, two = 0, one = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num) {
        if (num >= 100) {
            hundred++;
            num -= 100;
        }
        else if (num >= 50) {
            fifty++;
            num -= 50;
        }
        else if (num >= 10) {
            ten++;
            num -= 10;
        }
        else if (num >= 5) {
            five++;
            num -= 5;
        }
        else if (num >= 2) {
            two++;
            num -= 2;
        }
        else {
            one++;
            num--;
        }
    }

    printf("Hundred: %d, Fifty: %d, Ten: %d, Five: %d, Two: %d, One: %d\n", hundred, fifty, ten, five, two, one);
    printf("Total bils: %d", hundred + fifty + ten + five + two + one);

    return 0;
}
