#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int MAXN = 100005;
const int c = 9973;
typedef long long LL;
LL sum[MAXN];
string str;
int a,b;

LL mod_pow(LL x, LL n)
{
	if(n == 0)
	return 1;
	LL res = mod_pow(x * x % c, n/2);
	if (n & 1)
	res = res * x % c;
	return res;
}
LL inv(int n)
{
	//因为9973是质数	
	return  mod_pow(n, c - 2) % c;
}

void begin()
{
	sum[0] = 1;
	for(int i = 1; i <= (LL)str.length(); ++i)
	{
		sum[i] = sum[i - 1] * (str[i - 1] - 28);
		sum[i] %= c;
	}	
}
int main()
{
	int N;
	while(cin>>N)
	{
		cin>>str;
		memset(sum,0,sizeof(sum));
		begin(); 
		while(N--)
		{
			cin>>a>>b;
			cout<<(sum[b] * inv(sum[a-1]))%c<<endl;
		}
	}
	return 0;
 } 
