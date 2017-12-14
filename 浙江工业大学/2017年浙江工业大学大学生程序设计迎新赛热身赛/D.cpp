#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
int main(){
	LL N;
	LL a = 3 + 4 + 5;
	LL b = 20 + 21 + 29;
	LL c = 119 + 120 + 169;
	LL d = 696 + 697 + 985;
	LL e = 4059 + 4060 + 5741;
	LL f = 23660 + 23661 + 33461;
	LL i = 137903 + 137904 + 195025;
	LL j = 803760 + 803761 + 1136689;
	while(~scanf("%lld", &N)){
		printf("%lld\n", (N / a) + (N / b) + (N / c) + (N / d) + (N / e) + (N / f)
		+ (N / i) + (N / j));
	}
	return 0;
} 

