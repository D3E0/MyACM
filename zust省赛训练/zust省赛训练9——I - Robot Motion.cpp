#include <stdio.h>
#include <string.h>
int r,c,R,step,v[15][15],right,step1;
char s[15][15];
void go(int x,int y)
{
	if(x<0||x>=r||y<0||y>=c)
	{
		right=1;
		return;
	}	
    if(v[x][y])
    {
    	step1=step-v[x][y]+1;
    	step=v[x][y]-1;
    	return;
	}
	step++;
	v[x][y]=step;
	if(s[x][y]=='N') go(x-1,y);
	else if(s[x][y]=='S') go(x+1,y);
	else if(s[x][y]=='W') go(x,y-1);
	else if(s[x][y]=='E') go(x,y+1);
}
int main()
{
	int i;
	while(~scanf("%d%d%d",&r,&c,&R)&&r)
	{
		step=right=step1=0;
		memset(v,0,sizeof(v));
		memset(s,0,sizeof(s));
		for(i=0;i<r;i++) scanf("%s",s[i]);
		go(0,R-1);
		if(right) printf("%d step(s) to exit\n",step);
		else printf("%d step(s) before a loop of %d step(s)\n",step,step1);
	}
	return 0;
}
