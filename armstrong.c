#include <stdio.h>
int main()
{
    int n, org, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    org= n;

    while (org != 0)
    {
        r = org%10;
        result += r*r*r;
        org /= 10;
    }

    if(result == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}
