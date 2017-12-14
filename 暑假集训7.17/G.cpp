#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int maxn=100000;
int a[maxn];
int main()
{
	int n,n1,n2;
	while(cin>>n>>n1>>n2)
	{
		double sum1,sum2,arr=0;
		sum1=sum2=0;
		if(n2>n1) swap(n2,n1);
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=n-1;i>=n-n1-n2;i--)
		{
			if(n-1-i<n2)
			sum2+=a[i];
			else 
			sum1+=a[i];
		}
		arr=sum1/n1+sum2/n2;
		printf("%.8lf\n",arr);
	}
}
