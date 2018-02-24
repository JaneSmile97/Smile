#include <iostream>
using namespace std;

int isNumericString(unsigned char *num)
{
	int i=0;
    while (*(num+i)) {
        if (*(num+i) >= '0' && *(num+i) <= '9')
            i++;
        else
            return 0;
    }
    return 1;
}

int main()
{
	int ret = 0;
	unsigned char str1[]="abc";
	unsigned char str2[]="123";
	
	
	ret = isNumericString(str1);
	if(ret)
		cout<<"str1 Numeric" <<endl;
	else
		cout<<"str1 not Numeric"<<endl;
	
	ret = isNumericString(str2);
	if(ret)
		cout<<"str2 Numeric" <<endl;
	else
		cout<<"str2 not Numeric" <<endl;
	
	return 0;
}
