#include <iostream>
using namespace std;
 

bool inRange(unsigned low, unsigned high, unsigned x)
{
    return (low <= x  && x <= high);
}
 
int main()
{
    inRange(10, 100, 30)? cout << "Yes\n":  cout  <<"No\n";
    inRange(10, 100, 5)?  cout << "Yes\n":  cout  <<"No\n";
}
