#include <stdio.h>
#include <string.h>
struct t
{
	int y,m,d;
}j,c;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&j.y,&j.m,&j.d);
		scanf("%d %d %d",&c.y,&c.m,&c.d);
		if(j.y<c.y) printf("javaman\n");
		else if(j.y>c.y) printf("cpcs\n");
		else
		{
			if(j.m<c.m) printf("javaman\n");
			else if(j.m>c.m) printf("cpcs\n");
			else
			{
				if(j.d<c.d) printf("javaman\n");
			    else if(j.d>c.d) printf("cpcs\n");
			    else printf("same\n");
			}
		}
	}
	return 0;
}
