#include<cstdio>  
#include<algorithm>  
#include<cstring>  
#include<cstdlib>  
#include<iostream>  
using namespace std;  
long long int a[100005],f[1000000]={0},c=0;  
int main()  
{  
    long long int n,x,i,j;  
    scanf("%lld %lld",&n,&x);       
    for(i=0;i<n;i++)  
    {  
        scanf("%lld",&a[i]);  
        c+=f[a[i]^x];  
        f[a[i]]++;  
    }  
    printf("%lld",c);  
    return 0;  
}  
