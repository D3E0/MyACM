#include <cstdio>
#include <cmath>
#define Pi acos(-1)
using namespace std;

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int x, y, R, N;
		scanf("%d %d %d %d", &x, &y, &R, &N);
		double angle = (2 * Pi) / (N * 1.0);
		double ans_x, ans_y;
		for(int i = 0; i < N; ++i){
			ans_x = x + R * cos(-1 * i * angle);
			ans_y = y + R * sin(-1 * i * angle);
			if(ans_x <= 1e-4 && ans_x >= -1 * 1e-4) ans_x = 0.00;
			if(ans_y <= 1e-4 && ans_y >= -1 * 1e-4) ans_y = 0.00;
			printf("%.2lf %.2lf\n", ans_x, ans_y);
		}
	}
	return 0;
}
