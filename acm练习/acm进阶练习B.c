#include <stdio.h>
struct time
{
	int s;
	int e;
}T[105];
int main()
{
	int n,i,j,v,y,count,end_time,start_time;
	while (scanf("%d",&n)!=EOF&&n!=0)
	{		
		for(i=0;i<n;i++) scanf("%d%d",&T[i].s,&T[i].e);
        for(i=0;i<n-1;i++)     /*���ݽ�Ŀ�Ľ���ʱ���С��������*/
        {
    	   for(j=i+1;j<n;j++)
           {
                if(T[i].e>T[j].e)
                {
                    v=T[i].e;
                    T[i].e=T[j].e;
                    T[j].e=v;
                    y=T[i].s;
                    T[i].s=T[j].s;
                    T[j].s=y;
                }
           }
       }
       end_time=T[0].e;      /*������ʱ������Ϊ��һ����Ŀ�Ľ���ʱ�䣬��Ϊ��һ����Ŀ��һ��Ҫѡ��*/ 
	   count=1;              /*������һ����Ŀ�����Խ���Ŀ����ʼ��Ϊһ*/ 
		for(i=0;i<n;i++)     /*ѭ���ж�*/ 
		{
			if(T[i].s>=end_time)   /*�����һ����Ŀ�Ŀ�ʼʱ����ڴ���Ľ���ʱ�䣬
			                        ��ô�����Ŀ�ǿ��Թۿ��ģ���Ŀ����һ��
									�ҽ�����ʱ������Ϊ�½�Ŀ�Ľ���ʱ��*/ 
			{
				count++;
				end_time=T[i].e;
			}
		}
        printf("%d\n",count);
	}		
	return 0;
} 
