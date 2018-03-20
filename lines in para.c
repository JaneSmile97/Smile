#include<stdio.h>
int main()
{
	char a[150];
	int e=0,b=1,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='.')
		e=++b;
	}
	printf("%d",e);
}
