#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[10];
int main()
{
	int a,b,c,sum=0,i;
	char f1,f2;
	while(~scanf("%s",s))
	{
		int len=strlen(s);
		a=b=c=0;
		f1=f2=0;
		for(i=0;i<len;i++)
		{
			if(!isdigit(s[i])) 
			{
				f1=s[i];
				break;
			}
			a=(s[i]-'0')+10*a;
		}
		i++;
		for(;i<len;i++)
		{
			if(!isdigit(s[i])) break;
			b=(s[i]-'0')+10*b;
		}
		i++;
		for(;i<len;i++)
		{
			if(!isdigit(s[i])) 
			{
				f2=s[i];
				break;
			}
			c=(s[i]-'0')+10*c;
		}
		if(f2=='?') continue;
		else
		{
			if(f1=='-')
			{
				if((a-b)==c) 
				sum++;
			}
			else if(f1=='+')
			{
				if((a+b)==c) 
				sum++;
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}
