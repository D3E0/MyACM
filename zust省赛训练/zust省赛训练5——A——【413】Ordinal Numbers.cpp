#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int T,len;
	char s[15];
	scanf("%d",&T);
	while(T--)
	{
		memset(s,0,sizeof(s));
		scanf("%s",s);
		len=strlen(s);
		if(s[len-1]=='1')
		{
			if(s[len-2]=='1')
			{
				s[len]='t';
				s[len+1]='h';
			}
			else 
			{
				s[len]='s';
				s[len+1]='t';
			}
		}
		else if(s[len-1]=='2')
		{
			if(s[len-2]=='1')
			{
				s[len]='t';
				s[len+1]='h';
			}
			else 
			{
				s[len]='n';
				s[len+1]='d';
			}
		}
		else if(s[len-1]=='3')
		{
			if(s[len-2]=='1')
			{
				s[len]='t';
				s[len+1]='h';
			}
			else 
			{
				s[len]='r';
				s[len+1]='d';
			}
		}
		else
		{
			s[len]='t';
			s[len+1]='h';
		}
		puts(s);
	}
	return 0;
}
