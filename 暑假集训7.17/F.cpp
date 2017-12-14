#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,k;
	string std;
	while(cin>>n>>k)
	{
		cin>>std;
		int G_p,T_p,i,is_ok=0;
		for(i=0;i<std.length();i++)
		{
			if(std[i]=='G')
		    G_p=i;
		    if(std[i]=='T')
		    T_p=i;
		}
		if(T_p<G_p)
		{
			for(i=G_p;i>=0;i-=k)
			{
				if(std[i]=='#')
				{
					cout<<"NO"<<endl;
					is_ok=1;
					break;
				}
				if(std[i]=='T')
				{
					cout<<"YES"<<endl;
					is_ok=1;
					break;
				}
			}
			if(i<=0&&!is_ok)
			cout<<"NO"<<endl;
		}
		else
		{
			for(i=G_p;i<std.length();i+=k)
			{
				if(std[i]=='#')
				{
					cout<<"NO"<<endl;
					is_ok=1;
					break;
				}
				if(std[i]=='T')
				{
					cout<<"YES"<<endl;
					is_ok=1;
					break;
				}
			}
			if(i>=std.length()-1&&!is_ok)
			cout<<"NO"<<endl;
		}
	}
}
