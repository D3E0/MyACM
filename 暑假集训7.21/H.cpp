#include<iostream>

using namespace std;
typedef long long LL;
int main()
{
	LL n,m,k,i;
	while(cin>>n>>m>>k)
	{
		int x=m/n;
		double sum=0;
		while(1)
		{
			if(x-k>=0&&x-n+k>=0)
			sum=k*(2*x-k+1)/2.0+(n-k+1)*(2*x-n+k)/2.0-x;
			else if(x-k>=0&&x-n+k<0)
			sum=k*(2*x-k+1)/2.0+(x+1)*x/2.0-x;
			else if(x-k<0&&x-n+k>=0)
			sum=(x+1)*x/2.0+(n-k+1)*(2*x-n+k)/2.0-x;
			else if(x-k<0&&x-n+k<0)
			sum=(x+1)*x/2.0+(x+1)*x/2.0-x;
			if(sum>m-n)
			break;
			x++;
		}
	    cout<<x<<endl;
	}
    return 0;
}

