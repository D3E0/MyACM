#include<cstdio>
#include<algorithm>
using namespace std;
int l,n,m,a[50010];
bool check(int mid)  
{  
    int i,before = 0,cnt = 0;  
    for (i = 1; i <= n + 1;++i)  
    {  
        if (a[i] - a[before] >= mid) 
		before = i - 1;  
        else  
		cnt++;  
    }  
    if (cnt <= m)  
    return true;    
    else  
    return false;  
}  
int main()
{
	a[0]=0;
	scanf("%d%d%d",&l,&n,&m);
	a[n+1]=l;
	for(int i=1;i<=n;++i)
	scanf("%d",&a[i]);
	sort(a,a+n+1);
	int low=0;
	int high=l+1;
	int mid;
	while(high>=low)
	{
		mid=(low+high)/2;	 	
	    if(check(mid))
		low=mid;
		else
		high=mid; 		
	}
	printf("%d\n",mid);	
	return 0;
}
