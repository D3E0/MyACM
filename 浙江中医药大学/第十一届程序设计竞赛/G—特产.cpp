#include <cstdio>
using namespace std;
int main(){
	int T; 
	scanf("%d", &T);
	while(T--){
		long long n, m;
		scanf("%lld %lld", &n, &m); 
		printf("%lld\n", m - n); 
	}
	return 0;
}
