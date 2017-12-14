#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
        if(a%(b+1)!=0) putchar('L');
		else putchar('Z');
		putchar('\n');
	}
	return 0;
}
