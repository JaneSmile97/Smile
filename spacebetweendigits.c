#include <stdio.h>
void Space(int number)
{
     if (number < 0) 
     {
       number *= -1;
       printf("- ");           
     }
     if (number > 10) 
     {
        Space(number / 10);
        printf(" ");
     }

     printf("%d", number % 10);     
}

int main()
{
   int number = 123;
   Space(number);

   return 0;
}
