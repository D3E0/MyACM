#include <cstdio>
using namespace std;
const int MAXN = 100005;
int main(){
	int T, n, m, x, i;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &n, &m);
		int sum31[3] = {0}, sum32[3] = {0}, sum71[7] = {0}, sum72[7] = {0}, sum211[21] = {0}, sum212[21] = {0};
		long long count =  0;
		for(i = 0; i < n; ++i){
			scanf("%d", &x);
			++sum31[x % 3]; 
			++sum71[x % 7];
			++sum211[x % 21];
		}
		for(i = 0; i < m; ++i){
			scanf("%d", &x);
			++sum32[x % 3]; 
			++sum72[x % 7];
			++sum212[x % 21];
		}
		
		for(i = 0; i < 3; ++i) {
			if(sum31[i] > 0 && sum32[(3 - i) % 3] > 0)
			count += sum31[i] * sum32[(3 - i) % 3];
		} 
		
		for(i = 0; i < 7; ++i) {
			if(sum71[i] > 0 && sum72[(7 - i) % 7] > 0)
			count += sum71[i] * sum72[(7 - i) % 7];
		} 
		
		
		for(i = 0; i < 21; ++i) {
			if(sum211[i] > 0 && sum212[(21 - i) % 21] > 0)
			count -= sum211[i] * sum212[(21 - i) % 21];
		} 
		
		printf("%lld\n", count);
	}
	return 0;
} 
