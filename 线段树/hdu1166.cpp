/*
	http://acm.hdu.edu.cn/showproblem.php?pid=1166
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
	sum[rt]= sum[rt<<1]+ sum[rt<<1|1];  
}  

void build(int l,int r,int rt)
{  
	if(l == r)
	{   
		cin >> sum[rt];
		return; 
	}   
	int m = (l + r) >> 1;  
	build(lson);  
	build(rson);  
	PushUP(rt);  
}  

void update(int i, int j, int l, int r, int rt) 
{ 
	if (l == r) 
	{ 
		sum[rt] += j;  
		return; 
	}   
	int m = (l + r) >> 1;   
	if (i <= m) 
		update(i, j, lson);  
	else update(i, j, rson);  
	PushUP(rt); 
}  

int query(int L, int R, int l, int r, int rt) 
{ 
	if (L <= l && r <= R) return sum[rt];  
	int m = (l + r) >> 1;  
	int ret = 0;   
	if (L <= m) ret += query(L, R, lson);  
	if (R > m) ret += query(L, R, rson);  
	return ret; 
} 

int main()
{
	cin.sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int cas = 1; cas <= T; ++cas)
	{
		cout << "Case " << cas << ":" << endl;
		cin >> n;
		build(1, n, 1);
		string str;
		while (cin>>str)
		{
			if (str == "End") break;
			int i, j;
			cin >> i >> j;
			if (str == "Query")
				cout << query(i, j, 1, n, 1) << endl;
			else if (str == "Sub")
				update(i, -j, 1, n, 1);
			else 
				update(i, j, 1, n, 1);
		}
	}
	return 0;
}
