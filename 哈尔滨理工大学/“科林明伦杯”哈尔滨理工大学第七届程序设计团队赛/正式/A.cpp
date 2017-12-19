#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const double er = sqrt(2);                                 //¸ùºÅ¶þ 
const int MAXN = 50005;
int a[MAXN];
int main() {
	int T, cnt = 1, n, q;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &n, &q);
		printf("Case #%d:\n", cnt++);
		while (q--) {
			for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
			sort(a, a + n);
			int ans = a[0];                                 
			for (int i = 1; i < n; ++i) ans = min(a[i] - a[i - 1], ans);
			printf("%.4lf\n", ans * 1.0 / er);
		}
	}
	return 0;
}

