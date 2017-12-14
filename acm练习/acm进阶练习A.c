#include <stdio.h>
struct homework
{
	int deadline;
	int reduced_score;
}h[1005];
int main()
{
	int T,N,i,j,m,n,sum,day[1005]={0};
	scanf("%d",&T);
	while (T--)
	{
		scanf("%d",&N);
		for(j=0;j<N;j++) scanf("%d",&h[j].deadline);
		for(j=0;j<N;j++) scanf("%d",&h[j].reduced_score);
		for(i=0;i<N-1;i++)                            /*先根据所减分数从大到小进行排序，遇到所扣分数相同的，
		                                              根据截止时间从小到大进行排序，为了保证所扣分数最少，
		                                               所以先要保证分数大的做完*/
		{
			for(j=i+1;j<N;j++)
			{
				if(h[i].reduced_score<h[j].reduced_score)
				{
				   m=h[i].reduced_score;
				   h[i].reduced_score=h[j].reduced_score;
				   h[j].reduced_score=m;
				   n=h[i].deadline;
				   h[i].deadline=h[j].deadline;
				   h[j].deadline=n;	
				}
				else if(h[i].reduced_score==h[j].reduced_score)
				{
					if(h[i].deadline>h[j].deadline)
					{
						m=h[i].reduced_score;
				        h[i].reduced_score=h[j].reduced_score;
				        h[j].reduced_score=m;
				        n=h[i].deadline;
				        h[i].deadline=h[j].deadline;
				        h[j].deadline=n;	
					}
				}
			}	
		}
		sum=0;                                          /*初始化所扣分数为零*/ 
		for(i=0;i<N;i++) day[i]=0;                      /*将所需的天数初始化为0，代表没有使用过*/ 
		for(i=0;i<N;i++)
		{
			for(j=h[i].deadline;j>=1;j--)             /*将分数大的截止日期记作j，从截止日期出发向前查询，
			                                          选择最近的未被使用的天数。
			                                          将这一天数赋值为一，代表使用过*/ 
			{
				if(day[j-1]==0)
				{
					day[j-1]=1;
				    break;
				}	
			}
			if(j==0)                      /*如果全部查询后，没有天数可使用。那么扣分，此时所扣分数是最少的*/ 
			sum+=h[i].reduced_score;
		}
		printf("%d\n",sum);
	}
	return 0;
}
