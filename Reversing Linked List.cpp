#include <stdio.h>
#define MAXN 100005;

struct Node
{
	int Data;
	int Next;
}n[MAXN];
int main()
{
	int firstAddress,N,K,Address,Next,Data;
	scanf("%d%d%d",&firstAddress,&N,&K);
	for(int i = 0; i < N; i++)
	{
		scanf("%d%d%d",Address,Data,Next);
		n[Address].Data = Data;
		n[Address].Next = Next;
	}
	int k = 0;
	Address = firstAddress;
	for(int i = 0; i < N; i++,k++)
	{
		if(k == K)
		{
			for(int j = i; j >= i - K; j--)
			{
				
			}
		}
	}
}
