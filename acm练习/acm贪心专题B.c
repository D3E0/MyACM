/*ͨ����¼����ÿ��������ǰ�Ĵ���ȷ�������ѵ�ʱ��*/
#include <stdio.h>    
int main()  
{  
    int count[405],i, j, T, N, max, from, to; 
    scanf("%d", &T);  
    while (T-- )  
    {  
        for(i=0;i<405;i++) count[i]=0;
        scanf("%d",&N);  
        for (i=0;i<N;i++)  
        {  
            scanf("%d%d",&from,&to);  
            if (from>to)  
            {  
                int temp=from;  
                from=to;  
                to=temp;  
            }  
            if (from%2==0) count[from-1]++;   /*�����ʼ�ķ�����ż������ô���Ķ�����������Ҳ�Ǿ����ģ����Խ�������侭��������һ*/ 
            if (to%2==1) count[to+1]++;      /*��������ķ�������������ô���Ķ���ż������Ҳ�Ǿ����ģ�����ͬ����һ*/ 
            for (j=from;j<=to;j++) count[j]++;   
        }  
        max=0;  
        for (i=0;i<405;i++)  
        {  
            if (count[i]>max)  max = count[i]; 
        }  
         ntf("%d\n",ma x*10);  
    }  
    return 0;  
}  
