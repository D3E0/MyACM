#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=500005;
int a[maxn];
int main()
{
	int n,max,right,left,length;
	while(cin>>n)
	{
		max=right=left=length=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=1;i<n-1;i++)
		{
			right=left=length=0;
			int now=a[i];
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<now) 
				{
					now=a[j];
					left++;
				}
				else break;
			}
			now=a[i];
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<now) 
				{
					now=a[j];
					right++;
				}
				else break;
			}
			length=2*min(right,left)+1;
			max=max>length?max:length;
		}
		cout<<max<<endl;
	}
}
