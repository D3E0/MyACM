/*��Ϊf(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) %7. 
f(n)��ȡֵ��Χ��0~6��ͬ��f(n-1)��f(n-2)��ֵҲ����0~6��������A��Bȷ��������£���7*7=49�ֿ����ԣ�
��Ҫ������һ�����ڣ����Է�ֹ�������*/
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
