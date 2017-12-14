#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
string S,E;
//int fac[]={1,1,2,6,24,120,720,5040,40320,362880}; 
int vis[4000005];
struct Node{
	string stat;
	int step;
	Node(){}
	Node(string a,int b):stat(a),step(b){}
};

int contor(string s)
{
	int tmp, num = 0;
    for (int i = 0; i < 9; i++) {
        tmp = 0;
        for (int j = i + 1; j < 9; j++) {
            if (s[j] < s[i]) {
                tmp++;
            }
        }
        num = (num + tmp) * ((9 - i - 1) == 0 ? 1 : (9 - i - 1));
    }
    return num;
}

int solve()
{
	queue<Node> q;s 
	q.push(Node(S,0));
	vis[contor(S)] = 0;
	while(!q.empty())
	{
		Node x = q.front();
		q.pop();
		int i = x.stat.find('.'),count = 0;
		count = x.step + 1;
		if(i - 3 >= 0)
		{
			string t = x.stat;
			t[i] = t[i - 3];
			t[i - 3] = '.';
			int ct = contor(t);
			if(vis[ct] == -1)
			{
				vis[ct] = count;
				if(t == E)
				return vis[ct];
				q.push(Node(t,count));
			}	 
		}
		if(i % 3 != 0)
		{
			string t = x.stat;
			t[i] = t[i-1];
			t[i-1] = '.';
			int ct = contor(t);
			if(vis[ct] == -1)
			{
				vis[ct] = count;
				if(t == E)
				return vis[ct];
				q.push(Node(t,count));
			}	
		}
		if((i + 1) % 3 != 0)
		{
			string t = x.stat;
			t[i] = t[i+1];
			t[i+1] = '.';
			int ct = contor(t);
			if(vis[ct] == -1)
			{
				vis[ct] = count;
				if(t == E)
				return vis[ct];
				q.push(Node(t,count));
			}	
		}
		if(i + 3 <= 9)
		{
			string t = x.stat;
			t[i] = t[i + 3];
			t[i+3] = '.';
			int ct = contor(t);  
			if(vis[ct] == -1)
			{
				vis[ct] = count;
				if(t == E)
				return vis[ct];
				q.push(Node(t,count));
			}	
		}
	}
	return -1;
}
int main()
{

	cin.sync_with_stdio(false);
	cin>>S>>E;
	memset(vis,-1,sizeof(vis));
	printf("%d\n",solve());
 } 
