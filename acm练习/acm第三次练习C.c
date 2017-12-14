#include <stdio.h>
#include <string.h>
#define N 1001 
int main()
{
	char A[N],B[N];
	int i,j,T,z,l1,l2;
    scanf("%d",&T);
    if(T>=1&&T<=20)
    {
    	for(j=0;j<T;j++)
	    {
	    	int v1[N]={0},v2[N]={0},v3[N]={0};
		    scanf("%s%s",&A,&B);
		    l1=strlen(A);
		    l2=strlen(B);
		    for(i=0;i<l1;i++)
		    v1[i]=A[l1-1-i]-'0';
		    for(i=0;i<l2;i++)
		    v2[i]=B[l2-1-i]-'0';
		    for(i=0;i<N;i++)
		    v3[i]=v1[i]+v2[i];
		    for(i=0;i<N;i++)
		    {
			    if(v3[i]>=10)
			    {
				    v3[i+1]+=v3[i]/10;
				    v3[i]=v3[i]%10;
			    }			
		    }
		    printf("Case %d:\n",j+1);
		    printf("%s + %s = ", A, B);
		    z=0;
            for (i=N-1;i>=0;i--) 
	        {
                if (z==0) 
	            {
                    if (v3[i]!=0) 
	                {
                        printf("%d",v3[i]);
                        z=1;
                    }
                } 
		 	    else printf("%d",v3[i]);
           }
           if (z==0) 
		   printf("0");
		   if(j!=T-1) 
           printf("\n\n");
		   else printf("\n");		
	    }	
    }		
	return 0;
}