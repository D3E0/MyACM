/*
 * 树状数组
 */
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 1e5;
int c[MAXN], a[MAXN];
int lowbit(int x) {
	return x & -x;
}
//a[i] = v
void add(int x, int v) {
	while (x < MAXN) {
		c[x] += v;
		x += lowbit(x);
	}
}
//a[1]~a[x]的区间和
int sum(int x) {
	int s = 0;
	while (x) {
		s += c[x];
		x -= lowbit(x);
	}
	return s;
}
int main() {

}
