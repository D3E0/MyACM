#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
using namespace std;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		string s[1001],str;
		int i;
		map<string,int> name;
		int max=0;
        for(i=0;i<T;i++)  
		{
			cin>>s[i];
			name[s[i]]++;
			if(name[s[i]]>max)
			{
				max=name[s[i]];
				str=s[i];
			}
		}
		cout<<str<<endl;
	}
	return 0;
}
