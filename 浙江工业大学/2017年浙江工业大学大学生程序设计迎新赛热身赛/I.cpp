#include<iostream>
#include<cstring>
#include <queue>
#include<algorithm>
using namespace std;
int dir[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
char map[1005][1005];
bool vis[1005][1005];
int Max = 1e6 + 5;
struct Node {
	int x, y, cnt;
};
Node start = { 0, 0, 0 };
int BFS1(Node tar) {
	memset(vis, false, sizeof(vis));
	queue<Node> q;	
	q.push(start);
	vis[start.x][start.y] = true;

	while (!q.empty()) {
		Node cur = q.front();
		if (cur.x == tar.x && cur.y == tar.y) return cur.cnt * 2;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = cur.x + dir[i][0];
			int y = cur.y + dir[i][1];
			if (!vis[x][y]) {
				if (map[x][y] == '.' || map[x][y] == 'F') {
					Node temp = { x, y, cur.cnt + 1 };
					vis[x][y] = true;
					q.push(temp);
				}
			}
		}
	}
	return Max;
}

int BFS2(Node tar) {

	memset(vis, false, sizeof(vis));
	queue<Node> q;
	q.push(start);
	vis[start.x][start.y] = true;
	while (!q.empty()) {
		Node cur = q.front();
		if (cur.x == tar.x && cur.y == tar.y) return cur.cnt * 2;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = cur.x + dir[i][0];
			int y = cur.y + dir[i][1];
			if (!vis[x][y]) {
				if (map[x][y] == '.' || map[x][y] == 'M') {
					Node temp = { x, y, cur.cnt + 1 };
					if (x == tar.x && y == tar.y) return cur.cnt * 2 + 2;
					vis[x][y] = true;
					q.push(temp);
				}
			}
		}
	}
	return Max;
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, m, r, x;
		cin >> n >> m >> r >> x;
		for (int i = 0; i < n; i++) cin >> map[i];
		Node tar = { r - 1, x - 1, 0 };
		int ans = min(BFS1(tar), BFS2(tar));

		if (ans == Max) cout << "IMPOSSIBLE" << endl;
		else cout << ans << endl;
	}
	return 0;
}

