#include<stdio.h>
#include<string.h>
char s1[]= {"-=_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;'ASDFGHJKL:\"zxcvbnm,./ZXCVBNM<>?"};  
char s2[]= {"[]{}',.pyfgcrl/=\"<>PYFGCRL?+aoeuidhtns-AOEUIDHTNS_;qjkxbmwvz:QJKXBMWVZ"};
char c;
int main()
{
	int i;
	int len=strlen(s1);
	while(scanf("%c",&c)!=EOF)
	{
	    for(i=0;i<len;i++)
	    {
		    if(s1[i]==c)
		    {
			    printf("%c",s2[i]);
			    break;
		    }
	    }
	    if(i==len)
	    printf("%c",c);
    }
	return 0;
}

