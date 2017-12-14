#include <stdio.h>    
int main()  
{  
    int i,j,t,k,max;  
    while(scanf("%d%d",&i,&j)!=EOF)  
    {    
        if(i>j)
        {  
            t = i;  
            i = j;  
            j = t;  
        }  
        max=0;  
        for(k=i;k<=j;k++)  
        {  
            int n=k,sum=1;  
            while(n-1)  
            {  
                if(n%2)  
                n=3*n+1;  
                else  
                n=n/2;  
                sum++;  
            }  
            if(sum>max)  
            max=sum;  
        }
		printf("%d",max);  
    }  
    return 0;  
}  
