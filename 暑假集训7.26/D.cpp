#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long LL;	

int main()
{
	LL T,A,B,C,count=0;
	cin>>T;
	while(T--)
	{
        cin>>A>>B;
		LL ans=0;
		if(A==0&&B==0)
		ans=1;
		else if(A==0||B==0)
		ans=2;
		else
		{
			while(1)
			{
				C=A%B;
				ans+=A/B;
				A=B;
				B=C;
				if(C==0)
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
