#include <stdio.h>
#include <string.h>
const char* tableware[]={"bowl","knife","fork","chopsticks"};
char s[1000];
int main()
{
	int N,i,j;
	while(~scanf("%d",&N))
	{
		for(i=0;i<N;i++)
	    {
		    scanf("%s",s);
		    for(j=0;j<4;j++)
		    {
			    if(!strcmp(s,tableware[j]))
			    {
                    printf("%s ",s);
				    break;
			    }	
		    }
	    }
		printf("\n");
	}
	return 0;
}
