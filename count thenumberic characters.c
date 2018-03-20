#include <stdio.h>
#include<string.h>
int main() {
	int i,count=0;
	char a[200];
	printf("Enter the string with numberic characters");
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!= '\0';i++)
	{
	if(a[i]>='0' && a[i]<='9')
	{
	 count++;
	}
	}
	printf("%d",count);
	return 0;
}
