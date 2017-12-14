#include <stdio.h>
int main()
{
	int T,N,i,j,s;
	float P[100],V[100],x[100],t;
	char S[100][100];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		s=0;
		scanf("%d",&N);
		for(j=0;j<N;j++)
		scanf("%s%f%f",&S[j],&P[j],&V[j]);
		for(j=0;j<N;j++)
		{		    
			if(V[j]>=200)
			{
				if((V[j]/200)>6)
	            x[j]=P[j]/6;
				else
			    x[j]=P[j]/(V[j]/200);
			}
		}
		t=x[0];
		s=0;
		for(j=0;j<N;j++)
		{
			if(V[j]>=200)
			{
				if(t>x[j])
			    {
			        t=x[j];
			        s=j;
			    }
			    else if(t==x[j])
			    {
				    if(V[j]>V[s])
				    s=j;
			    }
			} 	
		}
		printf("%s\n",S[s]);		
	}
	return 0;
	
}
