#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
		int n;
int dir[3][2] = { { 0, 1 }, { 1, 0 }, { 1, 1 } };
int a[100][100];
struct Node {
	int x;
	int y;
	int cnt;
};
int BFS(int i, int j) {
	queue<Node> q;
	bool vis[100][100];
	Node node = { i, j, 0 };
	vis[i][j] = true;
	q.push(node);

	while (!q.empty()) {
		Node cur = q.front();
		q.pop();
		for (int i = 0; i < 3; i++) 
		{
			if(cur.x + dir[i][0] < n && cur.y + dir[i][1] < n)
			{
				Node New = { cur.x + dir[i][0], cur.y + dir[i][1], cur.cnt + 1 };

				if (!vis[New.x][New.y] && a[New.x][New.y] != a[cur.x][cur.y]) {
					q.push(New);
					vis[New.x][New.y] = true;
				} else {
					return cur.cnt + 1;
				}
			 } 			
		}

	}
}
int main() {

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				ans = max(BFS(i, j), ans);
			}
		}
		cout<<ans * ans<<endl;

	}
	return 0;

}
