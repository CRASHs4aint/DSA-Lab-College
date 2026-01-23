#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a number:");
    scanf("%f", &a);
    printf("Enter a number:");
    scanf("%f", &b);
    printf("addition:%f \n", a + b);
    printf("substraction:%f \n", a - b);
    printf("multiplication:%f \n", a * b);
    printf("divide:%f", a / b);
    return 0;
}
