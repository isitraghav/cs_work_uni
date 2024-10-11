#include <stdio.h>
int main(){
    for (int i = 0; i < 3; i++)
    {
        printf("* * * * *\n");
    }
    
    printf("\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==1)
            {
                if (j==1 || j==2 || j==3)
                {
                    printf("  ");
                }else{
                    printf("* ");
                }
                
            }
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
        
    }
    
}