#include <iostream>
#include <algorithm>

using namespace std;
const long long mod = 1000000007; 

long long pw(long long a, long long b)  
{  
    long long res=1;  
    while(b>0)  
    {  
        //a=a%mod;(有时候n的值太大了会超出long long的储存，所以要先取余)  
        if(b&1)//&位运算：判断二进制最后一位是0还是1，&的运算规则为前后都是1的时候才是1；  
            res=res*a%mod;  
        b=b>>1;//相当于除以2；  
        a=a*a%mod;  
    }  
    return res;  
}  
int main()
{
	int n;
	while(cin >> n)
	{
		int a[105];
		for(int i = 1; i <= n + 1; ++i)
		{
			cin >> a[i];
		}
		long long sum = 0;
		long long ans = pw(2, n - 1) % mod; 
		//cout<<ans<<endl;
		for(int i = 1; i < n + 1; ++i)
		{
			sum += ans * a[i] % mod;
			sum %= mod;
		}
		sum += a[n + 1];
		sum %= mod;
		cout << sum <<endl;
	}
	return 0;
 } 
