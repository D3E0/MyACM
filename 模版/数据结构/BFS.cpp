//============================================================================
//Name：广度优先搜索 BFS
//如要记录路径，则需开辟一个Node型的二维数组，用以存放当前节点的上一个节点，后从目标节点向根节点找
//Node path[25][25];
//path[New.x][New.y].x = cur.x;
//path[New.x][New.y].y = cur.y;
//============================================================================
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define N 5
int map[N][N];
bool vis[10][10];
//保存图
struct Node {
	int x;
	int y;
	int cnt;			//记录到达该节点的步数
};
//方向向量
int dir[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
void BFS(Node root, Node target);
bool Check(Node x);
int main() {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	//根节点与目标节点
	Node root = { 0, 0, 0 };
	Node target = { 4, 4 };
	BFS(root, target);

	return 0;
}
void BFS(Node root, Node target) {
	queue<Node> Q;
	memset(vis, 0, sizeof(vis));

	//root加入队列
	Q.push(root);
	vis[root.x][root.y] = true;

	while (!Q.empty()) {

		//取得并删除队列首节点
		Node cur = Q.front();
		Q.pop();

		//找到所有和cur相连的可行节点，并加入队列
		for (int i = 0; i < 4; i++) {

			Node New =
					Node { cur.x + dir[i][0], cur.y + dir[i][1], cur.cnt + 1 };

			if (!vis[New.x][New.y] && Check(New)) {

				//判断该节点是不是目标状态
				if (New.x == target.x && New.y == target.y) {
					cout << New.cnt << endl;
					return;
				}
				Q.push(New);
				vis[New.x][New.y] = true;
			}
		}
	}
}
bool Check(Node x) {
	if (map[x.x][x.y] == 0) {
		return true;
	}
	return false;
}
