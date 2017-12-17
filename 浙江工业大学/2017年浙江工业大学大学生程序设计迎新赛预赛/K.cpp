#include<iostream>
using namespace std;
int main(){
	int t, n, a[1005], Max;
	cin >> t;
	long long ans;
	while(t--){
		cin >> n;
		Max = 0;
		ans = 0;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] > a[Max]) Max = i;
		}
		for(int i = 0; i < n; ++i){
			if(i == Max) continue;
			ans += (a[i] + a[Max]) / 2;
		}
		cout << ans << endl;
	}
	return 0;
} 
