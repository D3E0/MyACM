/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2795
*/


#include <algorithm>
#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
#define lson l , m , rt << 1 
#define rson m + 1 , r , rt << 1 | 1 
const int maxn = 222222; 
int sum[maxn<<2];
int h,w,N;

void PushUP(int rt)
{  
	sum[rt] = max(sum[rt<<1], sum[rt<<1|1]);  
}  

void build(int l,int r,int rt)
{  
	sum[rt] = w;
	if(l == r) return;
	int m = (l + r) >> 1;  
	build(lson);  
	build(rson);   
}  

int query(int x, int l, int r, int rt) 
{ 
	if (l == r) 
	{
		sum[rt] -= x;
		return l;
	}	  
	int m = (l + r) >> 1;       
	int ret = (sum[rt<<1]>=x) ? query(x, lson) : query(x, rson);
	PushUP(rt);
	return ret;
} 

int main()
{
	cin.sync_with_stdio(false);
	int count = 0;
	while(cin >> h >> w >> N)
	{	
		if(h > N) h = N;
		build(1, h, 1);	
		int x;
		while(N--)
		{
			cin >> x;
			if(x > sum[1]) cout<<-1<<endl;
			else cout << query(x, 1, h, 1) << endl;
		}
	}
	return 0;
}
