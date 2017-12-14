#include <stdio.h>
#include <string.h>
#define maxn 11000
char s[maxn];
int main()
{
	int T,count=0,max;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",s);
        max=strlen(s);
		printf("Case %d: ",++count);
		if(max%2==0)
		printf("Even\n");
		else
		printf("Odd\n");
	}
	return 0;
}
