#include<cstdio>
using namespace std;
typedef long long LL;
LL gcd(LL a, LL b)  
{  
    LL r;  
    while(b > 0){  
         r = a % b;  
         a = b;  
         b = r;  
    }  
    return a;  
}  
int main(){
	LL t, n, b, ans;
	scanf("%lld", &t);
	while(t--){
		LL a[100005];
		scanf("%lld", &n);
		for(LL i = 0; i < n; ++i)
			scanf("%lld", &a[i]);
		b = a[0];
		for(LL i = 1; i < n; ++i)
			b = gcd(b, a[i]);
		ans = a[0] / b;
		printf("%lld\n", ans);
	}
	return 0;
} 

