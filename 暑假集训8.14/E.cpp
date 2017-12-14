#include <iostream>
#include <cstring>
#include <string>
using namespace std;
typedef long long LL;
const int MAXN = 10000;
int c1[MAXN],c2[MAXN];
void printBinary(LL n,int *c,int &len)
{
    while(n>0)
    {
    	c[len++]=n%2;
    	n/=2;
	}
}

LL Pow(LL x)
{
	LL res=1;
	for(int i=0;i<x;i++)
	res*=2;
	return res;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		memset(c1,0,sizeof(c1));
		memset(c2,0,sizeof(c2));
		LL l,r;
		cin>>l>>r;
		if(l==r)
		cout<<l<<endl;
		else
		{
			int len1,len2;
			len1=len2=0;
		    printBinary(l,c1,len1);
		    printBinary(r,c2,len2);
		    LL sum=0;
		    int flag=0;
	        for(int i=len2-1;i>=0;i--)
	        {
	        	if(c1[i]!=c2[i])
	        	{
                    flag=i;
                    break;
				}
				else
				sum+=c1[i]*Pow(i);
			}
			for(int i=flag;i>=0;i--)
			sum+=Pow(i);
		    cout<<sum<<endl;
		}		
	}
	return 0;
}
