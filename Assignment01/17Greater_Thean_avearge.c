#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int avearge, sum = 0, count = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    avearge = sum / 5;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>avearge){
            count++;
        }
    }
    printf("%d elements is greater then avearge of elements.",count);

    return 0;
}