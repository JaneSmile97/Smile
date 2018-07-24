#include <stdio.h>
int main(void)
{
	char array[100];
	printf("Enter the String");
	scanf("%s",array);
	int i,u,v;
	u=array[0];
	if(u>91)
	{
		v=u-32;
		array[0]=v;	
	}
	for(i=1;array[i]!='\0';i++)
	{
		if(array[i]==' ')
		{
			u=array[i+1];
			if(u>91)
			{
				v=u-32;
				array[i+1]=v;
			}	
		}
	}
	printf("%s",array);
	return 0;
}
