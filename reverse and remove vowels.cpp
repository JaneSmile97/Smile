
#include <bits/stdc++.h>
using namespace std;


void replaceOriginal(string s, int n)
{

	string r(n, ' ');


	for (int i = 0; i < n; i++) {

		
		r[i] = s[n - 1 - i];

		
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i'
			&& s[i] != 'o' && s[i] != 'u') {
			cout << r[i];
		}
	}
	cout << endl;
}


int main()
{
	string s = "Sundar";
	int n = s.length();
	replaceOriginal(s, n);

	return 0;
}
