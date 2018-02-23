#include <stdio.h>
int main()
{
    int n, rev = 0, remainder, org;

    printf("Enter an integer: ");
    scanf("%d", &n);

    org = n;

 
    while( n!=0 )
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }

    
    if (org == rev)
        printf("yes");
    else
        printf("no");
    
    return 0;
}
