#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
const double er = sqrt(2);
int a[50005];
int main() {
	int t, cnt = 1;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		printf("Case #%d:\n", cnt++);
		while (q--) {
			for (int i = 0; i < n; i++) cin >> a[i];
			sort(a, a + n);
			int ans = INT_MAX;
			for (int i = 1; i < n; i++) ans = min(a[i] - a[i - 1], ans);
			printf("%.4lf\n", ans * 1.0 / er);
		}
	}
	return 0;
}

