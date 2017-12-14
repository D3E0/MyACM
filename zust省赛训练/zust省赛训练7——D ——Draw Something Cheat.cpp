#include <stdio.h>
#include <string.h>
int Q[25][100];
int main()
{
	int T,N,i,j,t,sum,min;
	char s[25][12];
	scanf("%d",&T);
	while(T--)
	{
		memset(s,0,sizeof(s));
		memset(Q,0,sizeof(Q));
		scanf("%d",&N);
		for(i=0;i<N;i++)
		scanf("%s",s[i]);
		for(i=0;i<N;i++)
		{
			for(j=0;j<12;j++)
			Q[i][s[i][j]-'A']++;
		}
		for(i=0;i<30;i++)
		{
			min=Q[0][i];
			t=sum=0;
			for(j=0;j<N;j++)
			{
				if(!Q[j][i]) 
				{
					t=1;
					break;
				}
				else min=min<Q[j][i]?min:Q[j][i];
			}
			if(t) continue;
            else 
            {
            	for(j=0;j<min;j++)
            	putchar(i+'A');
			}	
		}
		printf("\n");
	}
	return 0;
}
