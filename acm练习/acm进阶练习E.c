/*���ٵ�����ռ�Ҫ��Ҫ����һǧ*/
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
		a+=s[i]-'0';            /*���ַ�ת��Ϊ����*/ 
		while(1)
		{
			m += a%10;
            a /= 10;
            if(a == 0)
            {
            	if(m >= 10)       /*a������ĸ�λ���ֵĺͣ�m��a��λ���ֵĺͣ�
				                  �����һ��ѭ����m������ʮ��
								  ��ô��m��a�����ٽ���ѭ����ֱ��m<10*/ 
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
