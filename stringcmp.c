t#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    scanf("%c",&a);

    printf("Enter the second string\n");    
    scanf("%c",&b);
    
    if( strcmp(a,b) == 0 )
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
        return 0;
}
