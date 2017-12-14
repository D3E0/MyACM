#include <stdio.h>
void first(int d)
{
	if(d==1||d==4) printf("   ");
	else if(d==2||d==3||d==5||d==6||d==7||d==8||d==9||d==0) printf(" _ ");
}
void second(int d)
{
	if(d==2||d==3) printf(" _|");
	else if(d==4||d==8||d==9) printf("|_|");
	else if(d==5||d==6) printf("|_ ");
	else if(d==0) printf("| |");
	else printf("  |");
}
void third(int d)
{
	if(d==1||d==4||d==7) printf("  |");
	else if(d==3||d==5||d==9) printf(" _|");
	else if(d==6||d==8||d==0) printf("|_|");
	else printf("|_ ");
}
void clock(int a,int b,int c,int d)
{
	first(a);
	first(b);
	first(c);
	first(d);
	putchar('\n');
	second(a);
	second(b);
	second(c);
	second(d);
	putchar('\n');
	third(a);
	third(b);
	third(c);
	third(d);
	putchar('\n');
}
int main()
{
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		clock(a,b,c,d);
	}
	return 0;
}
