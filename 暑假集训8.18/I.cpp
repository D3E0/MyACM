#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
struct problems
{
	int id;
	int cost;
}pb[15];
bool cmp(const problems &a,const problems &b)
{
	return a.cost<b.cost;
}
int main()
{
	int n,p;
	while(cin>>n>>p)
	{
		memset(pb,0,sizeof(pb));
		for(int i=0;i<n;i++)
		{
			cin>>pb[i].cost;
			pb[i].id = i;
		}
		if(pb[p].cost > 300)
		cout<<0<<' '<<0<<endl;
		else
		{
			int sum=0,count=1;
			sum=pb[p].cost;
			pb[p].cost=10000;
			sort(pb,pb+n,cmp);
			for(int i=0;i<n;i++)
			{
				if(sum+pb[i].cost>300)
				break;
				sum+=sum+pb[i].cost;
				count++;
				if(sum>300)
				break;
			}
			cout<<count<<' '<<sum<<endl;
		}
	}
	return 0;
}
