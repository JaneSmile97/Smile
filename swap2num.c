#include <stdio.h>
int main()
{
      int a, b, temporaryVariable;

      printf("Enter first number: ");
      scanf("%d", &a);

      printf("Enter second number: ");
      scanf("%d",&b);

      
      temporaryVariable = a;

      
      a = b;

      
      b = temporaryVariable;

      printf("\nAfter swapping, a = %d\n", a);
      printf("After swapping, b = %d", b);

      return 0;
}
