//============================================================================
//Name：Miller_Rabin算法判定素数
//============================================================================
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

const int times = 20;
int number = 0;
typedef long long ll;

ll Random(ll n) {
	//生成[ 0 , n ]的随机数
	return ((double) rand() / RAND_MAX * n + 0.5);
}
//快速乘法计算 (a*b) % mod
ll q_mul(ll a, ll b, ll mod) {
	ll ans = 0;
	while (b) {
		if (b & 1) {
			b--;
			ans = (ans + a) % mod;
		}
		b /= 2;
		a = (a + a) % mod;

	}
	return ans;
}
//快速幂取模计算 (a^b) % mod
ll q_pow(ll a, ll b, ll mod) {
	ll ans = 1;
	while (b) {
		if (b & 1) {
			ans = q_mul(ans, a, mod);
		}
		b /= 2;
		a = q_mul(a, a, mod);
	}
	return ans;
}
//miller_rabin算法的精华,用算子a来检验n是不是素数
bool witness(ll a, ll n) {
	//
	ll tem = n - 1;
	int j = 0;
	while (tem % 2 == 0) {
		tem /= 2;
		j++;
	}
	ll x = q_pow(a, tem, n);
	if (x == 1 || x == n - 1) {
		return true;	//余数为1则为素数
	}
	//否则试验条件2看是否有满足的 j
	while (j--) {
		x = q_mul(x, x, n);
		if (x == n - 1)
			return true;
	}
	return false;
}
//检验n是否是素数
bool miller_rabin(ll n) {
	if (n == 2) {
		return true;
	}
	if (n < 2 || n % 2 == 0) {
		//如果是2则是素数，如果<2或者是>2的偶数则不是素数
		return false;
	}
	//做times次随机检验
	for (int i = 1; i <= times; i++) {
		ll a = Random(n - 2) + 1; //得到随机检验算子 a
		if (!witness(a, n))			//用a检验n是否是素数
			return false;
	}
	return true;
}

int main() {
	ll tar;
	while (cin >> tar) {
		if (miller_rabin(tar))	//检验tar是不是素数
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
