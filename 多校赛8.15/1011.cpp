#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<< (3 + pow(-1,n))/2<<endl;
	}
	return 0;
 } 
