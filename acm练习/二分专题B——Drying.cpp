#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 100005
long a[maxn],k;
long n;
int comp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int good(long d)
{
	int cnt=0,i;  
    for(i=0;i<n;i++)
	{  
        if(a[i]>d)
		{  //���������У�a/b����ȡ�������ã�a+b-1��/b��
            cnt+=(a[i]-d+k-1-1)/(k-1); //�ۼӼ����ɻ��ܹ�ʹ�õ�ʱ�� 
            if(cnt>d) return 0;  //��ɻ���ʱ��ҪС�ڵ����ܵ�ʱ�� 
        }  
    }  
    return 1; 
}
int main()
{
	int i;
	long begin,end,mid,ans;
	while(scanf("%ld",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
		qsort(a,n,sizeof(long),comp);
		scanf("%ld",&k);
		if(k==1) printf("%ld\n",a[n-1]);
		else
		{
		    begin=1;
		    end=a[n-1];
		    while(begin-end<=0)
		    {
			    mid=begin+(end-begin)/2;
			    if(good(mid))
			    {
			       ans=mid;
				   end=mid-1;	
				}
			    else
			    begin=mid+1;
		    }
		    printf("%ld\n",ans);
		}	
	}
}
