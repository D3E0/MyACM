#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int a[1005];
int main()
{
	int n;
	while(cin>>n)
	{
		memset(a,0,sizeof(a));
		if(n == 0)
		{
			cout<<'*'<<endl;
			break;
		}
		int s,t,k;
		for(int i = 0;i < n; ++i)
		{
			cin>>s>>t>>k;
			if(s==t)
			continue;
			//cout<<i<<endl;	
			for(int i = s; i < t; ++i)
			{
				a[i]+=k;
				//cout<<i<<endl;
			}
				//cout<<i<<endl;	
		}		
		cout<<*max_element(a,a+1005)<<endl;
	}
	return 0;
}
