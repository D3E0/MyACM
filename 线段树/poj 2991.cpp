#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;
const double M_PI = acos(-1.0);
const int MAX_N = 10005;
const int MAX_C = 20005;
const int ST_SIZE = (1 << 15) - 1;

//输入
int N, C;
int L[MAX_N];
int S[MAX_C], A[MAX_C];

//线段树所维护的数据
double vx[ST_SIZE], vy[ST_SIZE];//各节点的向量
double ang[ST_SIZE];//各节点的角度

//为了查询角度的变化而保存的当前角度的数组
double prv[MAX_N];



//初始化线段树
//k是节点的编号，l,r表示当前节点对应的是[l,r)区间
void init(int k,int l,int r)
{
	ang[k] = vx[k] = 0.0;

	if (r - l == 1)
	{
		//叶子节点
		vy[k] = L[l];
	}
	else
	{
		//非叶子节点
		int chl = k * 2 + 1, chr = k * 2 + 2;
		init(chl, l, (l + r) / 2);
		init(chr, (l + r) / 2, r);
		vy[k] = vy[chl] + vy[chr];
	}
}


//把s和s+1的角度变为a
//v是节点的编号，l，r表示当前节点对应的是[l,r)区间
void change(int s, double a, int v, int l, int r)
{
	if (s <= l)
		return;
	else if (s < r)
	{
		int chl = v * 2 + 1, chr = v * 2 + 2;
		int m = (l + r) / 2;
		change(s, a, chl, l, m);
		change(s, a, chr, m, r);
		if (s <= m)
			ang[v] += a;

		double s = sin(ang[v]), c = cos(ang[v]);
		vx[v] = vx[chl] + (c * vx[chr] - s * vy[chr]);
		vy[v] = vy[chl] + (s * vx[chr] + c * vy[chr]);
	}
}

void solve()
{
	//初始化
	init(0, 0, N);
	for (int i = 1; i < N; ++i)
		prv[i] = M_PI;

	//处理操作
	for (int i = 0; i < C; ++i)
	{
		int s = S[i];
		double a = A[i] / 360.0 * 2 * M_PI;//把角度换算成弧度

		change(s, a - prv[s], 0, 0, N);
		prv[s] = a;

		printf("%.2f %.2f\n", vx[0], vy[0]);
	}
}

int main1()
{
	cin >> N >> C;
	for (int i = 1; i <= N; ++i)
		cin >> L[i];
	for (int i = 0; i < C; ++i)
		cin >> S[i]>>A[i];
	solve();
	system("pause");
	return 0;
}