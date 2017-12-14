#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout << (n % 2 == 0 ? "Bad" : "Balanced") << endl;
	}
	return 0;
}
