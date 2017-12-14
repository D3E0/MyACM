#include <stdio.h>  
#define MAX 500001  
int main()  
{  
    int T,n;  
    int a[MAX]={0};  
    a[0] = a[1] = -1;  
    for(int i = 2; i <= MAX/2; i++)  
    {  
        for(int j = i + i; j < MAX; j += i)  /*时间限制，所以用空间换时间，先打表，
		                                     构建1到500000之间各数因子和表*/
        a[j] += i;  
    }  
    scanf("%d",&T);  
    while(T--)  
    {  
        scanf("%d",&n);  
        printf("%d\n",a[n]+1);  
    }  
}  
