#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int T,n1,n2,n3;
	char f1,f2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %c %d %c %d",&n1,&f1,&n2,&f2,&n3);
		if(f1=='+')
		{
			if(f2=='+') printf("%d\n",n1+n2+n3);
			else if(f2=='-') printf("%d\n",n1+n2-n3);
			else if(f2=='*') printf("%d\n",n1+n2*n3);
			else if(f2=='/') printf("%d\n",n1+n2/n3);
			else if(f2=='%') printf("%d\n",n1+n2%n3);
		}
		else if(f1=='-')
		{
			if(f2=='+') printf("%d\n",n1-n2+n3);
			else if(f2=='-') printf("%d\n",n1-n2-n3);
			else if(f2=='*') printf("%d\n",n1-n2*n3);
			else if(f2=='/') printf("%d\n",n1-n2/n3);
			else if(f2=='%') printf("%d\n",n1-n2%n3);
		}
		else if(f1=='*')
		{
			if(f2=='+') printf("%d\n",n1*n2+n3);
			else if(f2=='-') printf("%d\n",n1*n2-n3);
			else if(f2=='*') printf("%d\n",n1*n2*n3);
			else if(f2=='/') printf("%d\n",n1*n2/n3);
			else if(f2=='%') printf("%d\n",n1*n2%n3);
		}
		else if(f1=='/')
		{
			if(f2=='+') printf("%d\n",n1/n2+n3);
			else if(f2=='-') printf("%d\n",n1/n2-n3);
			else if(f2=='*') printf("%d\n",n1/n2*n3);
			else if(f2=='/') printf("%d\n",n1/n2/n3);
			else if(f2=='%') printf("%d\n",n1/n2%n3);
		}
		else if(f1=='%')
		{
			if(f2=='+') printf("%d\n",n1%n2+n3);
			else if(f2=='-') printf("%d\n",n1%n2-n3);
			else if(f2=='*') printf("%d\n",n1%n2*n3);
			else if(f2=='/') printf("%d\n",n1%n2/n3);
			else if(f2=='%') printf("%d\n",n1%n2%n3);
		}
	}
	return 0; 
}
