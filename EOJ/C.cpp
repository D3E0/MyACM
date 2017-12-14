#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

const int MAXN = 100005;

struct node
{
	char x;
	int y;
}a[26];

bool cmp(const node &a, const node &b)
{
	return a.y > b.y;
}

char str[MAXN],ans[MAXN];

int flag = 0;

void dfs(int loc, int cnt)
{
	if (loc == strlen(str)) {
		for (int i = 0; i < cnt; i++) {
			cout << ans[i];
		}
		cout << endl;
		flag = 1;
		return;
	}
	for (int j = 0; j < 26; j++) {
		char ch = a[j].x;
		if (str[loc] != ch && a[j].y != 0) {
			ans[cnt] = ch;
			a[j].y--;
			dfs(loc + 1, cnt + 1);
			if (flag) {
				return;
			}
			a[j].y++;
		}
	}

}

int main()
{	
	int t; 
	scanf("%s",str);
	for(int i = 0; i < strlen(str); ++i)
	{
		t = str[i] - 'a';
		a[t].y++;
		a[t].x = str[i];
	}
	
	sort(a, a + 26, cmp);
	int Max = a[0].y;
	
	if(Max > (strlen(str) + 0.5) / 2)
	printf("impossible");
	else
	dfs(0, 0);
	return 0;
}

