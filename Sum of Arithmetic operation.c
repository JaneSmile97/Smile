#include <stdio.h>
 
int main()
{
    int counter, limit=100000, common_difference, term;
    printf("\nEnter Total Number of Terms: \t");
    scanf("%d", &limit);
    printf("\nEnter Common Difference: \t ");
    scanf("%d", &common_difference);
    printf("");
    for(counter = 1; counter <= limit; counter++)
    {
        term = 1 + (counter - 1) * common_difference;
        printf("%d \t", term);
    }
    printf("\n\n");
    return 0;
}
