#include <stdio.h>
int main()
{
    int n1,n2,n3;

    printf("\nnumbers: ");
    scanf("%d%d", &n1,&n2);
    printf("\n%d\t%d",n1,n2);
    n3=n1*n2;
   
    if(n3 % 2 == 0)
        printf("\n%d is even.", n3);
    else
        printf("\n%d is odd.", n3);

    return 0;
}
