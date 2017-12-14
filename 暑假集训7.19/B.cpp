#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	int n;
	char s[2005];
	while(cin>>n>>str)
	{
		memset(s,0,sizeof(s));
		int t=0;
		int len=str.length();
		if(n%2==0)
		len--;
		int mid=len/2;	
		int k=1;	
		for(int i=1;i<=len;i++)
		{
			if(n%2==0)
			{
				s[mid+k*t]=str[i-1];
				if(i-1)
				k=-k;
			}
			else
			{
				s[mid+k*t]=str[i-1];
				k=-k;
			}
			if((i-1)%2==0) t++;
		}
		if(n%2==0)
		s[len]=str[len];
		cout<<s<<endl;
	}
}
