// 线段树.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
const int MAX_N = 1 << 17;
int n, dat[2 * MAX_N - 1];

void init(int n_)
{
	//为了简单起见，把元素个数扩大到2的幂
	n = 1;
	while (n < n_)
		n *= 2;

	//把所有的值设为INT_MAX
	for (int i = 0; i < 2 * n - 1; ++i)
		dat[i] = INT_MAX;
}

void update(int k, int a)
{
	//叶子结点
	k += n - 1;
	dat[k] = a;
	//向上更新
	while (k > 0)
	{
		k = (k - 1) / 2;
		dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
	}
}

//求[a,b)的最小值
//后面的参数是为了计算起来方便而传入的。
//k是节点的编号，l,r表示这个节点对应的是[l,r)区间
//在外部调用时，用query(a,b,0,0,n)
int query(int a, int b, int k, int l, int r)
{
	//如果[a,b)和[l,r)，则返回INT_MAX
	if (r <= a || b <= l)
		return INT_MAX;

	//如果[a,b)完全包含[l,r)，则返回当前结点的值
	if (a <= l&&r <= b)
		return dat[k];
	else
	{
		//否则返回两个儿子中值的较小者
		int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
		int vr = query(a, b, k * 2 + 1, (l + r) / 2, r);
		return min(vl, vr);
	}
}


int main()
{
	system("pause");
	return 0;
}