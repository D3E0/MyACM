#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const char* w[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};   
int s[300];   
int work(int n)  
{  
    int sum=1,i;  
    for(i=1;i<=n;i++)  
    {  
        sum=sum*n;  
        sum%=7;  
    }  
    return sum;  
}    
int main()  
{  
    int t,n,i;  
    s[0]=0;  
    for(i=1;i<=294;i++)  
    {  
        s[i]=s[i-1]+work(i);  
        s[i]%=7;  
    }  
    scanf("%d",&t);  
    while(t--)  
    {  
        scanf("%d",&n);  
        n%=294;  
        printf("%s\n",w[s[n]]);  
    }  
    return 0;  
}  
