#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
map<string,int> k;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		k.clear();
		int n;
		cin>>n;
		string str[2005];
		for(int i=0;i<n;i++)
		{
			cin>>str[i];
			k[str[i]]++;
		}
		int len = min(k["ab"],k["ba"]);
		int lenaa = k["aa"];
		int lenbb = k["bb"];
		if(lenaa%2==1&&lenbb%2==1)
		{
			for(int i=0;i<(lenaa-1)/2;i++)
			cout<<"aa";
			for(int i=0;i<len;i++)
		    cout<<"ab";
			for(int i=0;i<lenbb/2;i++)
			cout<<"bb";
			cout<<"aa";
			for(int i=0;i<lenbb/2;i++)
			cout<<"bb";
			for(int i=0;i<len;i++)
		    cout<<"ba";
			for(int i=0;i<(lenaa-1)/2;i++)
			cout<<"aa";
		}
		else if(k["aa"]%2==1||k["bb"]%2==1)
		{
			
			if(lenaa%2==1&&lenbb%2==0)
			{
				for(int i=0;i<lenaa/2;i++)
			    cout<<"aa";
			    for(int i=0;i<len;i++)
		        cout<<"ab";
			    for(int i=0;i<lenbb/2;i++)
			    cout<<"bb";
			    cout<<"aa";
			    for(int i=0;i<lenbb/2;i++)
			    cout<<"bb";
			    for(int i=0;i<len;i++)
		        cout<<"ba";
			    for(int i=0;i<lenaa/2;i++)
			    cout<<"aa";
			}
			else if(lenaa%2==0&&lenbb%2==1)
			{
				for(int i=0;i<lenaa/2;i++)
			    cout<<"aa";
			    for(int i=0;i<len;i++)
		        cout<<"ab";
			    for(int i=0;i<lenbb;i++)
			    cout<<"bb";
			    for(int i=0;i<len;i++)
		        cout<<"ba";
			    for(int i=0;i<lenaa/2;i++)
			    cout<<"aa";
			}			
		}
		else
		{
			for(int i=0;i<lenaa/2;i++)
			cout<<"aa";
			for(int i=0;i<len;i++)
		    cout<<"ab";
			for(int i=0;i<lenbb;i++)
			cout<<"bb";
			for(int i=0;i<len;i++)
		    cout<<"ba";
			for(int i=0;i<lenaa/2;i++)
			cout<<"aa";
		}
		
		cout<<endl;
	}
	return 0;
}
