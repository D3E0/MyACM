#include <stdio.h>
#include <string.h> 
char a[1000];
int main()
{
	int i,len,n,b,l,mm,m;
	while(~scanf("%s",a))
	{
		if(!(a[0]-'0')) break;
		len=strlen(a);
		mm=a[len-2]-'0';
		m=(a[len-1]-'0')*5;
		a[len-1]='\0';		
		if(len==1) printf("0\n");
		else if(len==2) 
		{
			if(!(((a[0]-'0')-m)%17))
			printf("1\n");
			else printf("0\n");
		}
        else
        {
        	while(mm<m)
		    {
			    if((a[len-3]-'0')>0)
			    a[len-3]--;
			    else
			    {
				    a[len-4]--;
				    a[len-3]+=9;	
			    }
			    mm+=10;
		    }
		    a[len-2]=(mm-m)+'0';
		    len--;
		    for(i=0;i<len-2;i++)
		    {
                n=a[i]-'0';
                b=a[i+1]-'0';
                l=a[i+2]-'0';
                a[i]=0+'0';
                a[i+1]=((n*100+b*10+l)%17)/10+'0';
                a[i+2]=((n*100+b*10+l)%17)%10+'0';
		    }
		    if(!(a[len-1]-'0')&&!(a[len-2]-'0'))
		    printf("1\n");
		    else
		    printf("0\n");
		}	
	}
	return 0;
 } 

