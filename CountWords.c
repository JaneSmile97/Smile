#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[250];
    int count = 0, i;
 
    printf("String\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("No.of.Words: %d\n", count + 1);
}
