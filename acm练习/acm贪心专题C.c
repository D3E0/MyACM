#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
 {
    int l;
    int w;
    int flag;
 }stick[5005];
int cmp(const void *p,const void *q)
 {
     struct node *a = (struct node *)p;
     struct node *b = (struct node *)q;
     if(a->l > b->l) return 1;
     else if(a->l < b->l) return -1;
     else return a->w > b->w ? 1 : -1;
 }
int main()
{
	int T,n,i,j,l,w,min;
	scanf("%d",&T);
	while (T--)
	{
		memset(stick,0,sizeof(stick));
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%d%d",&stick[i].l,&stick[i].w);
		qsort(stick,n,sizeof(stick[0]),cmp);
		min=0;
		for(i=0;i<n;i++)
		{
		    j=0;
            while(stick[j].flag==1)
            j++;
            i=j;
            if(j==n) break;
			if(stick[i].flag==0)
			{
				l=stick[i].l;
				w=stick[i].w;
				for(j=i;j<n;j++)
				{
					if((stick[j].flag==0)&&(l<=stick[j].l)&&(w<=stick[j].w))
					{
						l=stick[j].l;
						w=stick[j].w;
						stick[j].flag=1;
					} 
				}
				min++;    
			}
				
		}
		printf("%d\n",min);	
	}
	return 0;
}
