#include <iostream>  
#include <cstdio>    
#include <algorithm>  
using namespace std; 
typedef long long LL; 
LL a[100000];    
int t,n; 
LL pow (int  x,int  y)  
{  
    x=(double)x;  
    y=(double)y;  
    LL ans=1;  
    while(y)  
    {  
        if(y&1)  
        ans*=x;  
        x*=x;  
        y>>=1;  
    }  
    return ans;  
}   
int main()  
{  
    int ge=0;  
    for(int i=0; i<30; i++)  
    {  
        LL  ii=pow(7,i);  
        for(int j=0; j<30; j++)  
        {  
            LL  jj=pow(5,j);  
            for(int k=0; k<30; k++)  
            {  
                LL  kk=pow(3,k);  
                for(int m=0; m<30; m++)  
                {  
                    LL   mm=pow(2,m);  
                    if(ii*jj*kk*mm>7000000000)  
                    break;  
                    else  
                    a[ge++]=ii*jj*kk*mm;   
                }  
            }  
        }  
    }  
    sort(a,a+ge);  
    scanf("%d",&t);  
    while(t--)  
    {  
        scanf("%d",&n);  
        printf("%lld\n",*lower_bound(a,a+ge,n));     
    }  
    return 0;
}  
