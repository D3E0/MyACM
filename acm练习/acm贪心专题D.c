#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	double J;
	double F;
	double s;
}room[1005];
int cmp(const void *p,const void *q)
 {
     struct node *a = (struct node *)p;
     struct node *b = (struct node *)q;
     if(a->s>b->s) return -1;
     else return 1;
 }
 int main()
 {
 	int i,j;
 	double all,M,N;
 	while (scanf("%lf%lf",&M,&N)!=EOF&&M!=-1&&N!=-1)
 	{
 		memset(room,0,sizeof(room));
 		for(i=0;i<N;i++)
 		{
 			scanf("%lf%lf",&room[i].J,&room[i].F);
 			room[i].s=room[i].J/room[i].F;
		 }
		 qsort (room,N,sizeof(room[0]),cmp);
		 all=0;
		 for(i=0;i<N;i++)
		 {
		 	if(M>=room[i].F)
		 	{
		 		all+=room[i].J;
		 		M-=room[i].F;
			}
			else 
			{
				all+=(room[i].J/room[i].F)*M;
				break;
			}
		 }
		 printf("%.3lf\n",all);
	}
	return 0;
 }
