#include <stdio.h>
int main()
{
    int number, j, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    for(j=2; j<=number/2; ++j)
    {
        
        if(number%j==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",number);
    else
        printf("%d is not a prime number.",number);
    
    return 0;
}
