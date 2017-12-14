#include <cstdio>
#include <cmath>
#include <iostream> 
using namespace std;

int main()
{
	int N,n,k;
	char c;
	scanf("%d %c",&N,&c);
	n = sqrt((N + 1) / 2) - 1;
	k = 2 * n + 1;
	for(int i = k; i >= 1; i -= 2)
	{
		for(int l = 0; l < (k - i)/2; l++)
		cout<<' ';
		for(int j = 0; j < i; j++)
		cout << c;
		cout<<endl;
	}
	
	for(int i = 3; i <= k; i += 2)
	{
		for(int l = 0; l < (k - i)/2; l++)
		cout<<' ';
		for(int j = 0; j < i; j++)
		cout << c;
		cout<<endl;
	}
	cout<<N-2*(n+1)*(n+1)+1<<endl;
	return 0;
}
