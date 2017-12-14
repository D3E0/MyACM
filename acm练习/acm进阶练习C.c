/*因为f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) %7. 
f(n)的取值范围是0~6，同理f(n-1)和f(n-2)的值也属于0~6，所以在A和B确定的情况下，有7*7=49种可能性，
重要的是求一个周期，可以防止数据溢出*/
#include <stdio.h>
int f(int x,int y, int t)
{
	if(t==1||t==2)
	return 1;
	else
	return (x*f(x,y,t-1)+y*f(x,y,t-2))%7;	
}
int main()
{
	int A,B,n;
	while(scanf("%d%d%d",&A,&B,&n)!=EOF&&(A!=0&&B!=0&&n!=0))
    printf("%d\n",f(A,B,n%49));
	return 0;
 } 
