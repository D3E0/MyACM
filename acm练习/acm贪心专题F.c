#include <stdio.h>
int main()
{
	int C,i,j,r,s;
	float weight;
	scanf("%d",&C);
	while (C--)
	{
		int n,m,p[1005],h[1005];
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++) scanf("%d%d",&p[i],&h[i]);
        for(i=0;i<m-1;i++)
        {
        	for(j=i+1;j<m;j++)
        	{
        		if(p[i]>p[j])
        		{
        			r=p[i];
        			p[i]=p[j];
        			p[j]=r;
        			s=h[i];
        			h[i]=h[j];
        			h[j]=s;
				}
				else if(p[i]==p[j])
				{
					if(h[i]<h[j])
					{
						r=p[i];
        			    p[i]=p[j];
        			    p[j]=r;
        			    s=h[i];
        			    h[i]=h[j];
        			    h[j]=s;
					}
				}
			}
		}
		weight=0;
		for(i=0;i<m;i++)
		{
			if(n>=(p[i]*h[i]))
			{
				weight+=h[i];
				n-=p[i]*h[i];
			}
			else if(n<p[i]*h[i])
			{
				weight+=n/(float)p[i];
				break;
			}
		}
		printf("%.2f\n",weight);
	}
	return 0;
}
