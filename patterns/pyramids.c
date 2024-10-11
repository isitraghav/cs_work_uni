#include <stdio.h>
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 6; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 6; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || i == 6 || j == i-1)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j--)
        {
            
        }
        
        
        printf("\n");
    }
    

    

    return 0;
}