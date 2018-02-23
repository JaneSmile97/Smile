# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int i,num,div ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &num) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &div) ; 
 printf("\nThe numbers divisible by %d are :\n\n", div) ; 
 for(i = 1 ; i <= num ; i++) 
  if(i % div == 0) 
   printf("%d\t", i) ; 
 getch() ; 
}
