#include <stdio.h>
int main()
{
    int base, exponent;

    int res = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        res *= base;
        --exponent;
    }

    printf("Answer = %d", res);

    return 0;
}
