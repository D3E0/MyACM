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
		for(i=0;i<N-1;i++)                            /*�ȸ������������Ӵ�С���������������۷�����ͬ�ģ�
		                                              ���ݽ�ֹʱ���С�����������Ϊ�˱�֤���۷������٣�
		                                               ������Ҫ��֤�����������*/
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
		sum=0;                                          /*��ʼ�����۷���Ϊ��*/ 
		for(i=0;i<N;i++) day[i]=0;                      /*�������������ʼ��Ϊ0������û��ʹ�ù�*/ 
		for(i=0;i<N;i++)
		{
			for(j=h[i].deadline;j>=1;j--)             /*��������Ľ�ֹ���ڼ���j���ӽ�ֹ���ڳ�����ǰ��ѯ��
			                                          ѡ�������δ��ʹ�õ�������
			                                          ����һ������ֵΪһ������ʹ�ù�*/ 
			{
				if(day[j-1]==0)
				{
					day[j-1]=1;
				    break;
				}	
			}
			if(j==0)                      /*���ȫ����ѯ��û��������ʹ�á���ô�۷֣���ʱ���۷��������ٵ�*/ 
			sum+=h[i].reduced_score;
		}
		printf("%d\n",sum);
	}
	return 0;
}
