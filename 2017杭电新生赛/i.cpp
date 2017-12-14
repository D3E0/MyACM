#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 100005;
long long a[MAXN], b[MAXN];

bool cmp(const long long &a, const long long &b)
{
	return a>b;
}

int main()
{
	int N, M;
	cin >> N >> M;
	for(int w = 0; w < N; ++w)
	cin >> a[w];
	for(int w = 0; w < M; ++w)
	cin >> b[w];	
	sort(a, a+N, cmp);
	sort(b, b + M ,cmp);
	int ans = min(N,M);
	long long sum = 0;
	for(int i = 0; i < ans; ++i)
	sum += a[i]*b[i];
	cout<<ans << " " << sum << endl;
	return 0;
 } 
