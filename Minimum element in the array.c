#include <stdio.h>
 
int main()
{
  int ar[100], min, size, c, loc = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &ar[c]);
 
  min = ar[0];
 
  for (c = 1; c < size; c++)
  {
    if (ar[c] < min)
    {
       min = ar[c];
       loc = c+1;
    }
  }
 
  printf("Minimum element is present at location %d and it's value is %d.\n", loc, min);
  return 0;
}