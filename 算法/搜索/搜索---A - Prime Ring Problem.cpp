#include <iostream>
#include <cstring>
using namespace std;
int vis[25],n,cnt=0;
int a[25];
int b[12]={2,3,5,7,11,13,17,19,23,29,31,37};
bool is_prime(int n)
{
	for(int i = 0; i < 12; ++i)
	{
		if(n == b[i])
		return true;
	}
	return false;
}
void dfs(int nod)
{
	if(n == nod && is_prime(a[0] + a[n-1]))
	{
		cnt++;
		for(int i = 0; i < n; ++i)
		{
			if(i != n-1)
			cout<<a[i]<<" ";
			else
			cout<<a[i]<<endl;
		}
		return;	
	}
	else
	{
		for(int i = 2; i <= n; ++i)
		{
			if(!vis[i]&&is_prime(a[nod - 1] + i))
			{
				a[nod] = i;
				vis[i] = 1;
				dfs(nod + 1);
				vis[i] = 0;
			}
		}
	}
}
int main()
{
	int count = 0;
	while(cin>>n)
	{
		cnt=0;
		memset(vis,0,sizeof(vis));
		memset(a,0,sizeof(a));
		cout<<"Case "<<++count<<":"<<endl;
		a[0] = 1;
		dfs(1);
		//cout<<cnt<<endl;
		cout<<endl;
	}
	return 0;
}
