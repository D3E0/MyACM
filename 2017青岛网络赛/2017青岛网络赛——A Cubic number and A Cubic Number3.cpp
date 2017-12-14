#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long LL;
int  main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL p,ans;
		cin>>p;
		ans = sqrt((p-1)/3);
		if(ans * (ans + 1) * 3 + 1 == p)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl; 
	}
	return 0;
}
