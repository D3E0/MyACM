#include <stdio.h>  
#define MAX 500001  
int main()  
{  
    int T,n;  
    int a[MAX]={0};  
    a[0] = a[1] = -1;  
    for(int i = 2; i <= MAX/2; i++)  
    {  
        for(int j = i + i; j < MAX; j += i)  /*ʱ�����ƣ������ÿռ任ʱ�䣬�ȴ��
		                                     ����1��500000֮��������Ӻͱ�*/
        a[j] += i;  
    }  
    scanf("%d",&T);  
    while(T--)  
    {  
        scanf("%d",&n);  
        printf("%d\n",a[n]+1);  
    }  
}  
