#include <stdio.h>

int main()
{
    double kg, gr, qu, mt, po;
    printf("Enter weight in kg: ");
    scanf("%lf", &kg);
    gr = kg * 1000;
    qu = kg / 100;
    mt = kg / 1000;
    po = kg * 2.20462;
    printf("Weight in kg: %.3lf\nWeight in gr: %.3lf\nWeight in qu: %.3lf\nWeight in mt: %.3lf\nWeight in po: %.3lf\n", (double)kg, (double)gr, (double)qu, (double)mt, (double)po);

    return 0;
}