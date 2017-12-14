#include <iostream>
#include <algorithm>

using namespace std;
const long long mod = 1000000007; 

long long pw(long long a, long long b)  
{  
    long long res=1;  
    while(b>0)  
    {  
        //a=a%mod;(��ʱ��n��ֵ̫���˻ᳬ��long long�Ĵ��棬����Ҫ��ȡ��)  
        if(b&1)//&λ���㣺�ж϶��������һλ��0����1��&���������Ϊǰ����1��ʱ�����1��  
            res=res*a%mod;  
        b=b>>1;//�൱�ڳ���2��  
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
