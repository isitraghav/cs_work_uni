#include <stdio.h>

int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}   
int main()
{
    int arr[10];
    printf("Enter 10 elements in array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of all elements in array is: %d", sumArr(arr, 10));
    return 0;
}

