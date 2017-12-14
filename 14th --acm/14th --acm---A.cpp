#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b,n,k,i;
		a=b=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&k);
			if(k==1)
	        a++;
	        else if(k==2)
	        b++;
	        else if(k==3)
	        {
	        	a++;
	        	b++;
			}
			else
			{
				a--;
				b--;
			}
		}
		if(a>b) printf("Kobayashi\n");
		else if(a<b) printf("Tohru\n");
		else printf("Draw\n");
	}
	return 0;
}
