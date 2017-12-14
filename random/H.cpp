#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		int count = 0;
		int begin, end;
		begin = end = 1;
		int sum = 0;
		for(int i = 1; i <= (n + 1) / 2; ++i)
		{
			sum += i;
			end = i;
			while ( sum >= n)
			{
				if(sum == n && begin != end)
				++count;
				sum -= begin;
				++begin;
			}
		}
		printf("%d\n", count);
	}
 } 
