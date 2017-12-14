#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,a[105];
	while(cin>>n)
	{
		long sum=0;
         for(int i=0;i<n;i++)
         {
         	 cin>>a[i];
         	 sum+=a[i];
		 }
        sort(a,a+n);
        cout<<n*a[n-1]-sum<<endl;
	}
	return 0;
}
