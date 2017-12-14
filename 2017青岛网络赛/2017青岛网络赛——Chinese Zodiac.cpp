#include <iostream>
#include <string>
#include <map>
using namespace std;
typedef long long LL;
int  main()
{
	map<string,int> m;
	m["rat"] = 1;
	m["ox"] = 2;
	m["tiger"] = 3;
	m["rabbit"] = 4;
	m["dragon"] = 5;
	m["snake"] = 6;
	m["horse"] = 7;
	m["sheep"] = 8;
	m["monkey"] = 9;
	m["rooster"] = 10;
	m["dog"] = 11;
	m["pig"] = 12;	
	int T;
	cin>>T;
	while(T--)
	{
		LL ans;
		string s1,s2;
		cin>>s1>>s2;
		ans = m[s2] - m[s1];
		if(ans <= 0)
		ans += 12;
		cout<<ans<<endl;
	}
	return 0;
}
