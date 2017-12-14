#include <iostream>
using namespace std;
const int MAXN=1000005;
int a[MAXN];
int main()
{
	int T,N,count=0;
	cin>>T;
	while(T--)
	{
        cin>>N;
        for(int i=0;i<N;i++)
        cin>>a[i];
        int ans=0;
		for(int i=0;i<N-1;i++)
		{
			for(int j=i+1;j<N;j++)
			{
				if(a[i]>a[j])
				{
					ans++;
					break;
				}				
			}
		}
		cout<<"Case #"<<++count<<": "<<ans<<endl;
	}
	return 0;
}
