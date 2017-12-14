#include <iostream>
using namespace std;
int main()
{
	int n,x,y,z;
	while(cin>>n)
	{
		if(n==1)
		cout<<-1<<endl;
		else
		{
			x=n;
		    y=n+1;
		    z=x*y;
		    cout<<x<<" "<<y<<" "<<z<<endl;
		}		
	}
}
