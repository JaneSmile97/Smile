#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int n,t=0,rem,q;
 printf("Enter the number: ");
 scanf("%d",&n);
 q=n;
 do
 {
      rem=q%10;
      t=t+pow(rem,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",t);
 getch();


}
