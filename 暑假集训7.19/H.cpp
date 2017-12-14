#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,a,b;
	while(cin>>n)
	{
		a=(int)sqrt(n);
		while(1)
		{
			b=n/a;
			if(a*b==n)
			{
				cout<<a<<" "<<b<<endl;
				break;
			}
			else
			{
				a--;
			}
		}
	}
	return 0;
}
