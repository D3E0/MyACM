#include<stdio.h>    
int fun(int n)  
{  
    return n*(n-1)/2;  
}    
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        int a = n / 2;  
        int b = n - a;  
        printf("%d\n",fun(a)+fun(b));  
    }  
    return 0;  
}  
