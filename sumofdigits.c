#include <stdio.h>
 
void main()
{
    long n, temp, d, s = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        s  = s + d;
        n /= 10;
    }
    printf(" %ld\n", temp);
    printf(" %ld", s);
}
