#include <cstdio>
using namespace std;
typedef unsigned long long ULL;

ULL solve(ULL right, ULL left, ULL n){
	ULL mid;
	while(right < left){
		mid = (left + right) >> 1;
		if( (mid * mid * mid * 4ull) + 2ull * mid >= n) left = mid;		
		else right = mid + 1;
	}		
	return (left * left * left * 4) + 2 * left;
}

int main(){
	int T; 
	scanf("%d", &T);
	while(T--){
		UUL n;
		scanf("%llu", &n); 
		printf("%llu\n", solve(0, 1500000, n)); 
	}
	return 0;
}
