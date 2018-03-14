#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    
    printf("Enter the first string\n");
    scanf("%s",&a);
    
    printf("Enter the second string\n");
    scanf("%s",&b);
    
    strcat(a,b);
    
    printf("String obtained on concatenation is %s\n",a);
    
    return 0;

}
