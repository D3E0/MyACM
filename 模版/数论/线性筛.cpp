//============================================================================
//Name������ɸ��������
//============================================================================
#include <algorithm>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 101;
int prime[MAXN];
bool notprime[MAXN];

void getPrime() {
	int cnt = 0;
	memset(notprime, 0, sizeof(notprime));
	for (int i = 2; i < MAXN; i++) {
		if (!notprime[i]) {
			prime[cnt++] = i;
		}
		//cout << "for i = " << i << "ɸ��:" << ' ';
		for (int j = 0; j < cnt && i * prime[j] < MAXN; j++) {
			notprime[i * prime[j]] = true;
			cout << i * prime[j] << "  ";
			if (i % prime[j] == 0) {
				break;
			}
		}
		//cout << endl;
	}
}

int main() {
	getPrime();
	for (int i = 0; prime[i] != 0; i++) {
		cout << prime[i] << " ";
	}
	cout << endl;
	return 0;
}

