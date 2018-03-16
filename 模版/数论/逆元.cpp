/*
 * ��Ԫ ���ٳ� ������
 */
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
//���ٳ˷����� (a*b) % mod
LL mul_mod(LL a, LL b, LL p) {
	LL ans = 0;
	while (b) {
		if (b & 1) {
			b--;
			ans = (ans + a) % p;
		}
		b /= 2;
		a = (a + a) % p;
	}
	return ans;
}
//������ȡ��a��b�η�����p
LL pow_mod(LL a, LL b, LL p) {
	LL ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a) % p;
		a = (a * a) % p;
		b >>= 1;
	}
	return ans;
}
//����С������a����p����Ԫ
LL Fermat(LL a, LL p) {
	return pow_mod(a, p - 2, p);
}

