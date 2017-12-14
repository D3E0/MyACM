/*
	http://acm.hdu.edu.cn/showproblem.php?pid=1754
*/


#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define lson l , m , rt << 1 
#define rson m + 1 , r , rt << 1 | 1 
const int maxn = 222222; 
int sum[maxn<<2];

void PushUP(int rt)
{  
	sum[rt]= max(sum[rt<<1], sum[rt<<1|1]);  
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
		sum[rt] = j;  
		return; 
	}   
	int m = (l + r) >> 1;   
	if (i <= m) 
		update(i, j, lson);  
	else 
		update(i, j, rson);  
	PushUP(rt); 
}  

int query(int L, int R, int l, int r, int rt) 
{ 
	if (L <= l && r <= R) return sum[rt];  
	int m = (l + r) >> 1;    
	int ret = 0;   
	if(L <= m) 
	ret = max(ret , query(L , R , lson)); 
	if(R > m) 
	ret = max(ret , query(L , R , rson));  
	return ret;
} 

int main()
{
	cin.sync_with_stdio(false);
	int N,M;
	while(cin >> N >> M)
	{
		build(1, N, 1);
		char c;
		int A, B;
		while (M--)
		{
			cin >> c >> A >> B;
			if (c == 'Q')
				cout << query(A, B, 1, N, 1) << endl;
			else 
				update(A, B, 1, N, 1);
		}
	}
	return 0;
}
