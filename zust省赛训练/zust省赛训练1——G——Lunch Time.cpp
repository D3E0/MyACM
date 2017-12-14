#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int T,S,M,D;
typedef struct
{
	char s[100];
	int n;
}node;
node appetizer[105],main_course[105],dessert[105];
int cmp(const void* a,const void* b)
{
	node* c=(node*)a;
	node* d=(node*)b;
	if(c->n>d->n)
	return 1;
	else
	return -1;
}
int main()
{
	int i,max,a,b,c;
	scanf("%d",&T);
	while(T--)
	{
		memset(appetizer,0,sizeof(appetizer));
		memset(main_course,0,sizeof(main_course));
		memset(dessert,0,sizeof(dessert));
		scanf("%d %d %d",&S,&M,&D);
		for(i=0;i<S;i++)
		{
			scanf("%s",appetizer[i].s);
			getchar();
			scanf("%d",&appetizer[i].n);
		} 
		for(i=0;i<M;i++)
		{
			scanf("%s",main_course[i].s);
			getchar();
			scanf("%d",&main_course[i].n);
		}
		for(i=0;i<D;i++)
		{
			scanf("%s",dessert[i].s);
			getchar();
			scanf("%d",&dessert[i].n);
		}
		qsort(appetizer,S,sizeof(node),cmp);
		qsort(main_course,M,sizeof(node),cmp);
		qsort(dessert,D,sizeof(node),cmp);
		if(S%2!=0) a=(S-1)/2;
		else a=S/2;
		if(M%2!=0) b=(M-1)/2;
		else b=M/2;
		if(D%2!=0) c=(D-1)/2;
		else c=D/2;
		max=appetizer[a].n+main_course[b].n+dessert[c].n;
		printf("%d %s %s %s\n",max,appetizer[a].s,main_course[b].s,dessert[c].s);
	}
	return 0;
}
