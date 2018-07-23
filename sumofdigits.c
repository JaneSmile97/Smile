#include <stdio.h>
 
void main()
{
    long n, d, s = 0;
 
    printf("Number: \n");
    scanf("%ld", &n);
    printf(" %ld\n",n);
    while (n > 0)
    {
        d = n % 10;
        s  = s + d;
        n /= 10;
    }
   
    printf(" %ld", s);
}
