#include <stdio.h>
#include <ctype.h>
int main()
{
	int T;
	char x;
	scanf("%d",&T);
	getchar();
	while(T--)
	{
          while(~scanf("%c",&x))
          if(!isdigit(x)) putchar(x);
	}
	return 0;
}
