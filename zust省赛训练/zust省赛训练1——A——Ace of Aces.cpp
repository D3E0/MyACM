#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 1005 
int T,N;
typedef struct
{
	int ID;
	int number;
}node;
node a[maxn];
int cmp(const void* a,const void* b)
{
	node* c=(node*)a;
	node* d=(node*)b;
	if(c->number<d->number) 
	return -1;
	else
	return 1;
}
int main()
{
	int i,j;
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&j);
			a[j].ID=j;
			a[j].number++;
		}
		qsort(a,maxn,sizeof(node),cmp);
		if(a[1004].number==a[1003].number)
		printf("Nobody\n");
		else
		printf("%d\n",a[1004].ID);
	}
	return 0;
}
