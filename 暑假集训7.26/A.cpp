#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int T,N,a[105],count=0;
	cin>>T;
	while(T--)
	{
		memset(a,0,sizeof(a));
		cin>>N;
		for(int i=0;i<N;i++)
		cin>>a[i];
		bool is_ok=true;
        for(int i=0;i<N;i++)
        {
        	if(a[i]%3!=0)
        	is_ok=false;
		}
		cout<<"Case #"<<++count<<": ";
		if(is_ok==false)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
	return 0;
}
