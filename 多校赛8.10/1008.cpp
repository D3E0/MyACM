#include <iostream> 
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAXN = 5005;
char a[MAXN],b[MAXN];
int solve(char )
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int m;
		scanf("%d",&m);
		getchar();
		for(int i=0;i<m;i++)
		scanf("%c",&a[i]);
		for(int i=0;i<m;i++)
		scanf("%c",&b[i]);
		int sum=0;
		for(int i=0;i<m;i++)
		{
			if(a[i]!=b[m-i-1])
			sum++;
		}
        printf("%d\n",sum);
	}
	return 0;
}
