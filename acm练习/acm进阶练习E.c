/*开辟的数组空间要大，要超过一千*/
#include <stdio.h>
#include <string.h>
int main()
{    
    char s[1005];
	int a,i,m;
	while (scanf("%s",&s)&&strcmp(s,"0")!=0)
	{		
		a=m=0;
		for(i=0;i<strlen(s);i++)
		a+=s[i]-'0';            /*将字符转化为数字*/ 
		while(1)
		{
			m += a%10;
            a /= 10;
            if(a == 0)
            {
            	if(m >= 10)       /*a是输入的各位数字的和，m是a各位数字的和，
				                  如果第一次循环后m还大于十，
								  那么将m与a互换再进行循环，直至m<10*/ 
                {
                    a = m;
                    m = 0;
                }
                else break;
			}               
		}
		printf("%d\n",m);
	}
	return 0;
}
