/*通过记录经过每个房间门前的次数确定所花费的时间*/
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
            if (from%2==0) count[from-1]++;   /*如果开始的房间是偶数，那么它的对面奇数房间也是经过的，所以将这个房间经过次数加一*/ 
            if (to%2==1) count[to+1]++;      /*如果结束的房间是奇数，那么它的对面偶数房间也是经过的，所以同样加一*/ 
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
