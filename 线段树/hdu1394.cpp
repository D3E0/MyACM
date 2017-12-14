/*
	http://acm.hdu.edu.cn/showproblem.php?pid=1394
*/


#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define lson l , m , rt << 1 
#define rson m + 1 , r , rt << 1 | 1 
const int maxn = 55555; 
int sum[maxn<<2];

void PushUP(int rt)
{  
	sum[rt] = sum[rt<<1] + sum[rt<<1|1];  
}  

void build(int l,int r,int rt)
{  
	sum[rt] = 0;  
	if(l == r) return;
	int m = (l + r) >> 1;  
	build(lson);  
	build(rson);   
}  

void update(int p, int l, int r, int rt) 
{ 
	if (l == r) 
	{ 
		++sum[rt];  
		return; 
	}   
	int m = (l + r) >> 1;   
	if (p <= m) 
		update(p, lson);  
	else 
		update(p, rson);  
	PushUP(rt); 
}  

int query(int L, int R, int l, int r, int rt) 
{ 
	if (L <= l && r <= R) return sum[rt];  
	int m = (l + r) >> 1;    
	int ret = 0;   
	if(L <= m) 
	ret += query(L , R , lson); 
	if(R > m) 
	ret += query(L , R , rson);  
	return ret;
} 

int x[maxn];

int main()
{
	cin.sync_with_stdio(false);
	int N;
	while(cin >> N)
	{
		build(0, N - 1, 1);
		int sum = 0;
		for(int i = 0;i < N; ++i)
		{
			cin >> x[i];
			sum += query(x[i], N - 1, 0, N - 1, 1);
			update(x[i], 0, N - 1, 1);
		}
		int ret = sum;
		for(int i = 0; i < N; ++i)
		{
			sum += N - x[i] - x[i] - 1;
			ret = min(ret, sum);
		}
		cout << ret << endl;
	}
	return 0;
}
