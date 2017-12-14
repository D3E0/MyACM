#include <stdio.h>
int main()
{
    int T,N,x,y,a,sum,max,i,j,ks,ke; 
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    	scanf("%d",&N);
        sum=max=-1001;x=y=1;
    	for(j=0;j<N;j++)
    	{
		    scanf("%d",&a);/*a代表输入的数字*/ 
			if(sum<0)      /*如果sum<0，证明这段数列不会是最大的，
			               将他与输入的a进行交换，同时将ks和ke都记为i*/ 
			{
			    sum=a;
				ks=j+1;
				ke=j+1;
			}
			else           /*相反，那么将a加入到sum中，将ke加1*/ 
			{
			    sum+=a;
			    ke++;
			}
			if(max<sum)/*如果max<sum，那么将sum的值赋给max，
			             作为最大值，同时将ks赋给x，
						 代表这段子数列的开端，同理y*/ 
			{
			    max=sum;
				x=ks;
				y=ke;
			}		
		}
		if(i==0) 
		printf("Case %d:\n%d %d %d\n",i+1,max,x,y);
        else 
		printf("\nCase %d:\n%d %d %d\n",i+1,max,x,y);
	}
	return 0;
}
