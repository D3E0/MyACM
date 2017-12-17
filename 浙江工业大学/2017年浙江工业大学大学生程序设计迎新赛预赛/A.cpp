#include<cstdio>
using namespace std;
int main(){
	int T;
	scanf("%d", &T);
	int k, n, sum, x, key;
	while(T--){
		scanf("%d %d",&n,&k);
		sum = 0;
		for(int i = 1; i <= n; ++i){
			if(i == k){
				scanf("%d",&key);
				continue;
			}
			scanf("%d", &x);
			sum ^= x;
		}
		if(sum < key) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 
