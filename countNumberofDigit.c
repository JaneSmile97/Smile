#include <stdio.h>
int main()
{
    int Number;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &Number);

    while(Number != 0)
    {
        
        Number /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
