#include <iostream>
#include <string>
#include <cstring>
#include <map> 
using namespace std;

int main()
{
	string s,t;
	bool is_ok;
	map<char,int> k;
	map<char,char> v;
	while(cin>>s>>t)
	{
		is_ok=true;
		int len=s.length();
		int count=0;
		char v1[1005],v2[1005];
		memset(v1,0,sizeof(v1));
		memset(v2,0,sizeof(v2));
		k.clear();
		v.clear();
		for(int i=0;i<len;i++)
		{
			if(s[i]!=t[i])
			{
				if(k[s[i]]==0&&k[t[i]]==0)
				{
					v1[count]=s[i];
				    v2[count]=t[i];
				    count++;
		            k[s[i]]=1;
		            k[t[i]]=1;
		            v[s[i]]=t[i];
		            v[t[i]]=s[i];
				}
				else if(k[s[i]]==1&&k[t[i]]==0)
				{
					if(v[s[i]]!=t[i])
					is_ok=false;
				}
				else if(k[s[i]]==0&&k[t[i]]==1)
				{
					if(v[t[i]]!=s[i])
					is_ok=false;
				}
				else if(k[s[i]]==1&&k[t[i]]==1)
				{
					if(v[t[i]]!=s[i]||v[s[i]]!=t[i])
					is_ok=false;
				}		
			}
			else
			{
				if(k[s[i]]==1)
				{
					if(v[s[i]]!=t[i]||v[t[i]]!=s[i])
				    is_ok=false;
				}
				else
				{
					k[s[i]]=1;
				    v[s[i]]=t[i];
				}	
			}
			if(is_ok==false)
			break;		
		}
		if(is_ok==false)
		cout<<-1<<endl;
		else
		{
			cout<<count<<endl;
		    for(int i=0;i<count;i++)
			cout<<v1[i]<<" "<<v2[i]<<endl;
		}
	}
	return 0;
}
