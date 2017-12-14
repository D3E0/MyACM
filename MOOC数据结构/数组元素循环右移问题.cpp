#include <iostream>
using namespace std;

int main()
{
	int N,M,a[105];
	cin>>N>>M;
	for(int i=0;i<N;i++)
	cin>>a[i];
	for(int i=0;i<N;i++)
	{
		int k = i - M;
		while(k<0)
		k+=N;
		if(i!=N-1)
		cout<<a[k]<<' ';
		else
		cout<<a[k]<<endl;
	}	
	return 0;
}
