#include <stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    
}
