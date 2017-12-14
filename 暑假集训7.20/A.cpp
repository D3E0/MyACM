#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n%2==1)
		{
			cout<<(n-3)/2+1<<endl;
			while(n-3)
			{
				cout<<2<<" ";
				n-=2;
			}
			cout<<3<<endl;
		}
		else
		{
			cout<<n/2<<endl;
			while(n-2)
			{
				cout<<2<<" ";
				n-=2;
			}
			cout<<2<<endl;
		}
	}
	return 0;
}
