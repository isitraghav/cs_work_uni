#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("*  ");
        }

        printf("\n");
    }
    printf("\n");
    printf("\n");

    // hollow rectangle
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (!(i == 1 && j > 0 && j < 4))
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    return 0;
}