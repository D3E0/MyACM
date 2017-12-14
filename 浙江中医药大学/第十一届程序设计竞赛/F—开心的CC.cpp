#include<cstdio>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, sum = 0, x;
		scanf("%d", &n);
		while(n--){
			scanf("%d", &x);
			if(x == 0) x = -1;
			sum += x;
		}
		printf("%d\n", sum > 0 ? sum : 0);
	}
	return 0;
}
/*
2
5
1 0 1 1 0
5
1 1 1 1 1
*/
