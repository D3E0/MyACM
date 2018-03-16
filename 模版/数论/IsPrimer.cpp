//============================================================================
//Name：普通筛求素数表
//============================================================================

#include<iostream>
#include<cstring>
using namespace std;

const int MAXN = 500000;
bool notprime[MAXN];
int prime[MAXN];

void getPrime() {
	int cnt = 0;
	memset(notprime, 0, sizeof(notprime));
	for (int i = 2; i < MAXN; i++) {
		if (!notprime[i]) {
			prime[cnt++] = i;
			for (int j = i * i; j < MAXN; j += i) {
				notprime[j] = true;
			}
		}

	}
}

int main() {
	getPrime();
	for (int i = 0; prime[i] != 0; i++) {
		cout << prime[i] << endl;
	}

}

