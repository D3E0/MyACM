#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
int main()  
{  
    int n,i;  
    int sum=0;  
    while(scanf("%d",&n)!=EOF)  
    {  
        sum=0;  
        for(i=1;i<=n;i++)  
        {  
            sum+=i;  
            if(sum>=n)  
            {  
                if(i%2==1)  
                {  
                   printf("TERM %d IS %d/%d\n",n,1+sum-n,i+n-sum);  
                   break;  
                }  
                else  
                {  
                    printf("TERM %d IS %d/%d\n",n,i+n-sum,1+sum-n);  
                    break;  
                }  
            }  
  
        }  
    }  
    return 0;  
}  


