#include <iostream>
#include <string>

using namespace std;

typedef long long LL;
char ans[100];
int l;
void change(LL x,int y)
{
	l=0;
	while(x)
	{
		ans[l++]=x%y+'0';
		x/=y;
	}
}
int main()
{
	string A;
	int m;
	while(cin>>A>>m)
	{
		LL t=0;
		for(int i=0;i<A.size();i++)
		t=t*26+A[i]-'a';
		if(!t)
		cout<<0;
		else
		{
			change(t,m);
			for(int j=l-1;j>=0;j--)
			cout<<ans[j];
		}
		cout<<endl;
	}
	return 0;
}
