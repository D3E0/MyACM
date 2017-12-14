#include <cstdio>
//´æÔÚ105·Ö		
int main()
{
	int N,x,win,fail,score;
    char duanwei;
	while(~scanf("%d",&N)) 
	{
		score=0;
		duanwei='D';
        win=0;
        fail=0;
		for(int i=0;i<N;i++)
		{
			
			scanf("%d",&x);
			if(score<100)
			{
               	win=fail=0;
				if(x) score+=10;
			    else
			    {
				    if(score) score-=5;
			    }
			}
			else
			{
				if(x) win++;
				else fail++;
				if(win==2)
				{
					score=0;
					duanwei--;
				}
				else if(fail==2) score=60;
			}						    
		}
		if(duanwei<'A') duanwei='S';
		printf("%c\n",duanwei);
	}
	return 0;
 } 
