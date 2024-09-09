#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a%2)
    {
        printf("The number is Odd");
    }else{
        printf("the number id Even");
    }
    
    return 0;
}