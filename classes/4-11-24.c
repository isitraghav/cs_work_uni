#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 1; i < 11; i++)
    {
        printf("Enter array %d value: ", i);
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0]);
    return 0;   
}