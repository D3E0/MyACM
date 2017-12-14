#include <iostream>
using namespace std;
typedef long long LL;
LL flag[55];
int main()
{
	int n;
	LL k;
	while(cin>>n>>k)
	{
		int count=0;
        if(k%2)
		cout<<1<<endl;
		else
		{
			while(k%2==0)
			{
				k/=2;
				count++;
			}
			cout<<count+1<<endl;
		} 
	}
	return 0;
}
