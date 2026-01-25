#include <stdio.h>
int main()
{

    int n ;
    printf("Enetr length of arrays:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array.", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Entered array is :");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (arr[i] == arr[j])
        {
            printf("Entered array is palindrome.");
        }
        else
        {
            printf("Entered array is not palindrome.");
        }
    }
}