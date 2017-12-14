/*
	http://poj.org/problem?id=2828
*/


#include <algorithm>
#include <iostream>
using namespace std;
const int MAXN = 222222;
int pos[MAXN],val[MAXN],sum[MAXN<<1];

void build(int l, int r, int rt)
{
	if( l == r)
	{
		sum[rt] = 0;
		return;
	}
	
	int m = (l + r) >> 1;
	build(l, m, rt << 1);
	build(m + 1, r, rt << 1 | 1);	
}

void PushUp(int l, int r, int rt)
{
	sum[rt] = sum[rt << 1] + sum[rt << 1 | 1];
}

void update(int pos, int val, int l, int r, int rt)
{
	if(l == r)
	{
		sum[rt] = val;
		return;
	}
	int m = (l + r) >> 1; 
	if(sum[rt] < l - r)
	{
		update(pos, val, l, m, rt << 1);
	}
	else
	return;
}
int main()
{
	cin.sync_with_stdio(false);
	int N;
	while(cin >> N)
	{	
		build(0, N - 1, 1);
		for(int i = 1; i <= N; ++i) cin>>pos[i]>>val[i];
		for(int i = N; i >= 1; ++i) update(pos[i],val[i])
	}
	return 0;
}
