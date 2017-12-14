#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T,N,M,a[55],b[55];
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		int sum1,sum2;
		sum1=sum2=0;
		for(int i=0;i<N-1;i++)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		for(int i=0;i<M;i++)
		{
			cin>>b[i];
			sum2+=b[i];
		}
		int av1,av2;
		av1=ceil(sum1/(double)(N-1))-1;
		av2=sum2/M+1;
		cout<<av2<<" "<<av1<<endl;
	}
	return 0;
}
