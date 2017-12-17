#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long LL;
const LL mod = 1e9 + 7;
int main(){
	int T;
	LL n, A, d, c, sum;
	scanf("%d", &T);
	while(T--){
		sum = 0;
		scanf("%lld %lld %lld %lld", &n, &A, &d, &c);
		sum = (A / c) + ((n - 1) * d) / (2 * c);
		printf("%lld\n", ((sum % mod) * (n % mod)) % mod);
	}
	return 0;
} 
