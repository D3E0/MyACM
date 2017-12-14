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
        for(i=0;i<n-1;i++)     /*根据节目的结束时间从小到大排序*/
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
       end_time=T[0].e;      /*将结束时间设置为第一个节目的结束时间，因为第一个节目是一定要选的*/ 
	   count=1;              /*至少有一个节目，所以将节目数初始化为一*/ 
		for(i=0;i<n;i++)     /*循环判断*/ 
		{
			if(T[i].s>=end_time)   /*如果下一个节目的开始时间大于储存的结束时间，
			                        那么这个节目是可以观看的，节目数加一，
									且将结束时间设置为新节目的结束时间*/ 
			{
				count++;
				end_time=T[i].e;
			}
		}
        printf("%d\n",count);
	}		
	return 0;
} 
