#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char str1[100],str2[100],str3[100];
	int i,a,b,c,d,e;
	while(~scanf("%s%s",str1,str2))
	{
		for(i=0;i<strlen(str1);i++)
		{
			a=str2[i%strlen(str2)]-'a';
			b=str1[i]-'a';
			c=(a+b)%26;
			str3[i]=c+'a';
		}
		cout<<str3<<endl;
	}	
	return 0;
}
