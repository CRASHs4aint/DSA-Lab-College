#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0, j = 4; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("The reverse of given array is: ");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}