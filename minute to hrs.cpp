#include <iostream>
using namespace std;
 
int  main()
{
	
	int t =63;
	int hr = 0;
	int min = 0;
	int sec = 0;

	hr = t/3600;
	t = t%3600;
	min = t/60;
	t = t%60;
	sec = t;
	
	
	cout<<" "<<hr<<" hours, "
		<<min<<" minutes, and "<<sec<<" seconds!";
	
	return 0;
}
