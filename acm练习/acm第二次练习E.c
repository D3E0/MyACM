#include <stdio.h>
int main()
{
	int n,m,i,j,count,s;
	double b[51][51],sum1[51],sum2[51];
	while (scanf("%d%d",&n,&m)!=EOF)
	{		
		for(j=1;j<=m;j++)
		{
		    sum2[j]=0;	
		}
		for(i=1;i<=n;i++)
		{ 
            sum1[i]=0;
			for(j=1;j<=m;j++)
			{	
			    scanf("%lf",&b[i][j]);
			    sum2[j]=sum2[j]+b[i][j];
			    sum1[i]=sum1[i]+b[i][j];
			}
		}
		for(i=1;i<=n;i++)
		{
			if(i!=n)
			printf("%.2lf ",sum1[i]/(double)m);
		    else
            printf("%.2lf",sum1[i]/(double)m);		
		}
		printf("\n"); 
		for(j=1;j<=m;j++)
		{
			if(j!=m)
			printf("%.2lf ",sum2[j]/(double)n);
			else 
			printf("%.2lf",sum2[j]/(double)n);
        }
		printf("\n");
		count=0;
		for(i=1;i<=n;i++)
		{
			s=0;
			for(j=1;j<=m;j++)
			{ 
			    if(b[i][j]>=(sum2[j]/(double)n))
			    s++;
			}
			if(s==m)
			count++;
		}
		printf("%d\n\n",count);		
	}
	return 0;
}
 