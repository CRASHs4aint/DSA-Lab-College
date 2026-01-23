#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int reverse = 0;
    while (a != 0)
    {

        reverse = (reverse * 10) + (a % 10);
        a=a / 10;
    }
    printf("The reverse of entered number is %d", reverse);
    return 0;
}
