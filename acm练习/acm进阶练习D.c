/*贪心的本质在于：田只在有把握赢的情况下拿出快马和王拼，否则用最慢的马比掉王的快马最大程度削弱王的战斗力*/ 
#include <stdio.h>
#define N 1010
void sort(int a[], int l)
{
    int i,j,v;
    for(i=0;i<l-1;i++)
    {
    	for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
                v=a[i];
                a[i]=a[j];
                a[j]=v;
            }
        }
	}        
}
int main()
{
    int Tian[N], Qi[N];
	int n,i,max_Tian,min_Tian,max_Qi,min_Qi,count;
	long score;
	while (scanf("%d",&n)!=EOF&&n!=0)
	{		
		for(i=0;i<n;i++) scanf("%d",&Tian[i]);
		for(i=0;i<n;i++) scanf("%d",&Qi[i]);
		sort(Tian,n);               /*先进行从小到大的排序，确定最快的马和最慢的马*/
		sort(Qi,n);
		score=0;                     /*初始化钱数*/ 
		max_Tian=max_Qi=n-1;         /*将最快的马的序号记录*/ 
		min_Tian=min_Qi=0;            /*将最慢的马的序号记录*/ 
		count=0;                     /*代表比赛次数，先初始化为零*/ 
		while ((count++)<n)           /*每进行一次循环，次数加一*/ 
		{
			if(Tian[max_Tian]>Qi[max_Qi])/*如果田忌的最快马快于齐王的最快马，则两者比*/ 			                             
		    {                             /*（因为若是田忌的别的马很可能就赢不了了，所以两者比）*/
			    score+=200;
			    max_Tian--;
			    max_Qi--;
		    }
			else if(Tian[max_Tian]<Qi[max_Qi])  /*如果田忌的最快马慢于齐王的最快马，
			                                     则用田忌的最慢马和齐王的最快马比。
                                               （由于所有的马都赢不了齐王的最快马，
											   所以用损失最小的，拿最慢的和他比）*/ 
			{
				score-=200;
				min_Tian++;
				max_Qi--;
			}
			else                           /*若相等，则比较田忌的最慢马和齐王的最慢马*/ 
			{
				if(Tian[min_Tian]>Qi[min_Qi])   /*若田忌最慢马快于齐王最慢马，两者比。
                                               （田忌的最慢马既然能赢一个就赢呗，
											   而且齐王的最慢马肯定也得有个和他比，所以选最小的比他快得。）*/ 
				{
					score+=200;
					min_Tian++;
					min_Qi++;
				}
				else                          /*其他，则拿田忌的最慢马和齐王的最快马比。
                                             （反正所有的马都比田忌的最慢马快了，
											 所以这匹马必输，选贡献最大的，干掉齐王的最快马）*/ 
				{
				    if(Tian[min_Tian]<Qi[max_Qi])
				    score-=200;
				    min_Tian++;
				    max_Qi--;	
				}
			}	
		}
		printf("%ld\n",score);			
	}
	return 0;
}

