#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstring>
#define id(a) ((a)-'a')
using namespace std;
const int maxnode = 10000*50+10;
int ch[maxnode][26];
int val[maxnode];
int sz = 0;
int n;

char s[100010]; 
char a[100010];

int mmax;
void insert(char *s)
{
    int len =strlen(s);
    int u = 0;
    for(int i = 0;i < len;i++)
	{
        int c = id(s[i]);
        if(!ch[u][c])
		{
            memset(ch[sz],0,sizeof(ch[sz]));
            val[sz] = 0;
            ch[u][c] = sz++;
        }
        u = ch[u][c];           
    }
    val[u] ++;
}

void query(char *s){
    int ans = 0;
    for(int i = 0;s[i];i++)
	{
        int c = id(s[i]);
        int u = 0;
        int j = 0;
        while(ch[u][c]){
            if(val[ch[u][c]])
			{
                ans += val[ch[u][c]];
                val[ch[u][c]] = 0;
            }
            u = ch[u][c];
            j ++;
            c = id(s[i+j]);
        }
    }
    if(ans==n)
    cout<<s<<endl;
    else
    printf("No\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
	{
        mmax=-1;
        scanf("%d",&n);
        memset(ch[0],0,sizeof(ch[0]));
        val[0]= 0;
        sz = 1;
        for(int i = 0;i < n;i++){
            scanf("%s",a);
            insert(a);
            int l=strlen(a);
            if(l>mmax)
            {
                mmax=l;
                strcpy(s,a);
            }
        }
        query(s);
    }
    return 0;
}
