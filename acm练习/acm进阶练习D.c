/*̰�ĵı������ڣ���ֻ���а���Ӯ��������ó��������ƴ����������������ȵ����Ŀ������̶���������ս����*/ 
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
		sort(Tian,n);               /*�Ƚ��д�С���������ȷ�����������������*/
		sort(Qi,n);
		score=0;                     /*��ʼ��Ǯ��*/ 
		max_Tian=max_Qi=n-1;         /*�����������ż�¼*/ 
		min_Tian=min_Qi=0;            /*�������������ż�¼*/ 
		count=0;                     /*��������������ȳ�ʼ��Ϊ��*/ 
		while ((count++)<n)           /*ÿ����һ��ѭ����������һ*/ 
		{
			if(Tian[max_Tian]>Qi[max_Qi])/*�����ɵ�������������������������߱�*/ 			                             
		    {                             /*����Ϊ������ɵı����ܿ��ܾ�Ӯ�����ˣ��������߱ȣ�*/
			    score+=200;
			    max_Tian--;
			    max_Qi--;
		    }
			else if(Tian[max_Tian]<Qi[max_Qi])  /*�����ɵ���������������������
			                                     ������ɵ�������������������ȡ�
                                               ���������е���Ӯ���������������
											   ��������ʧ��С�ģ��������ĺ����ȣ�*/ 
			{
				score-=200;
				min_Tian++;
				max_Qi--;
			}
			else                           /*����ȣ���Ƚ���ɵ��������������������*/ 
			{
				if(Tian[min_Tian]>Qi[min_Qi])   /*���������������������������߱ȡ�
                                               ����ɵ��������Ȼ��Ӯһ����Ӯ�£�
											   ����������������϶�Ҳ���и������ȣ�����ѡ��С�ı�����á���*/ 
				{
					score+=200;
					min_Tian++;
					min_Qi++;
				}
				else                          /*������������ɵ�������������������ȡ�
                                             ���������е�������ɵ���������ˣ�
											 ������ƥ����䣬ѡ�������ģ��ɵ������������*/ 
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

