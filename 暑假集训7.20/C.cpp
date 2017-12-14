#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int v[200005];
int d1[200005];
int r1[200005];
int main()
{
	string vote;
	int n;
	while(cin>>n>>vote)
	{
		int d,r,r11,d11,flag;
		d=r=0;
		memset(v,0,sizeof(v));
		memset(d1,-1,sizeof(d1));
		memset(r1,-1,sizeof(r1));
		for(int i=0;i<n;i++)
		{
			if(vote[i]=='D')
			d1[d++]=i;
			else
			r1[r++]=i;
		}
		r11=r;
		d11=d;
		flag=0;
		while(d1[flag]!=-1&&r1[flag]!=-1)
		{
			if(d1[flag]<r1[flag])
			{
				d1[d11++]=d1[flag];
			}
			else
			r1[r11++]=r1[flag];
			flag++;
		}	
		if(d1[flag]==-1)
		cout<<'R'<<endl;
		else
		cout<<'D'<<endl;
	}
	return 0;
}
