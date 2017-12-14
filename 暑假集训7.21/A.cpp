#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n,m,k;
	while(cin>>n>>m>>k)
	{		
	    cout<<ceil(k/(2.0*m))<<" ";
		if(k%(2*m)==0)
		cout<<m<<" ";
		else
		cout<<ceil((k%(2*m))/2.0)<<" ";
		if((k%(2*m))%2==0)
		cout<<'R'<<endl;
		else
		cout<<'L'<<endl;
	}
	return 0;
}
