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
		    scanf("%d",&a);/*a�������������*/ 
			if(sum<0)      /*���sum<0��֤��������в��������ģ�
			               �����������a���н�����ͬʱ��ks��ke����Ϊi*/ 
			{
			    sum=a;
				ks=j+1;
				ke=j+1;
			}
			else           /*�෴����ô��a���뵽sum�У���ke��1*/ 
			{
			    sum+=a;
			    ke++;
			}
			if(max<sum)/*���max<sum����ô��sum��ֵ����max��
			             ��Ϊ���ֵ��ͬʱ��ks����x��
						 ������������еĿ��ˣ�ͬ��y*/ 
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
