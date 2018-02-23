#include<stdio.h>
int main()
{
    int a=1, b, n, result=1;
    printf("Enter b and power n \n");
    scanf("%d \n %d", &b, &n);

    while (a<=n)
      {
         result = result*b;
         a = a+1;
      }

    printf("%d to the power %d is %d", b, n, result);
    return 0;
