#include <stdio.h>  
#include <string.h>    
int main()  
{  
    int T, num, i, ans;
	char s[100],ss[100][100];    
    scanf("%d",&T);  
    while (T--)  
    {  
        scanf("%d %s",&num,s); 
        for(i=0;i<num;i++)
		{
			scanf("%s",ss[i]);
			if(!strcmp(s,ss[i])) ans=i;
		}     
        ans=(ans+num/2)%num;  
        printf("%s\n",ss[ans]);  
	}
	return 0;  
}  
