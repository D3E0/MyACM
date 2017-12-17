#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long LL; 
const LL mod = 1e9 + 7;
const int MAXN = 100005;
const int MX = 1000005; 
long long pow_mod(long long x, long long n, long long mod) {
    long long res = 1;
    while (n) {
        if (n & 1) res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}
long long fac[MX];
long long n, m, p;
struct node{
	int val, pos;
}a[MAXN];
int b[MAXN];
int d[MAXN];
bool cmp(const node &a, const node &b){
    return a.val < b.val;
}
int main(){
	LL t;
	cin >> t;
	p = mod;
	fac[0] = 1;
    for (int i = 1; i <= MX; i++) {fac[i] = fac[i - 1] * i % p;}
	while(t--){
		LL N, q;
		cin >> N >> q;
		for(int i = 1; i <= N; ++i){
			scanf("%d", &b[i]);
			a[i].val = b[i];
			a[i].pos = i;
		}
		sort(a + 1, a + N + 1, cmp);
		for(int i = 1; i <= N; ++i){
			d[i] = a[i].val;
		}
		while(q--){
			LL x,k;
			scanf("%lld %lld", &x, &k);
		//	cout << *lower_bound(d + 1, d + N + 1, x) << endl;
			LL keyi = a[lower_bound(d + 1, d + N + 1, x) - d].pos;//G(x);
			n = k;
			m = keyi;
			LL keyf = (fac[n] * pow_mod(fac[m], p - 2, p) % p * pow_mod(fac[n - m], p - 2, p) % p) % N + 1;//H(x);
			LL ans = b[keyf];//f(x);
			cout << ans << endl;
		}
	}
}

