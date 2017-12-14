#include <cstdio>
using namespace std;

typedef long long LL;
const  LL mod = 1e9 + 9;

LL mod_pow(LL n){
	LL res = 1, x = 2;
	while(n > 0){
		if(n & 1) res = (res * x) % mod;
		x = (x * x) % mod;
		n >>= 1;
	}	
	return res;
}

int main(){
	LL n;
	while(~scanf("%lld", &n)){
		printf("%lld\n", (3 * mod + (6 * mod_pow(n)) % mod - ((n % mod) * (n % mod)) % mod - (4 * (n % mod)) % mod - 6) % mod);
	}
	return 0;
} 
