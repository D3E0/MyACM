#include <iostream>
#include <cmath>
using namespace std;
const int MAXN = 100005;
int prima[MAXN],count;
void is_prima(int n)
{
    count = 1;
	for(int i = 2; i <= n; i++)
	{
		bool flag =true;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			flag = false;
		}
		if(flag)
    	prima[count++] = i;	
	}
}
int main()
{
	int n;
	cin>>n;
	is_prima(n);
	int sum = 0;
	for(int i=1;i<count-1;i++)
	{
	    if(prima[i+1]-prima[i]==2)
		sum++;		
	}
	cout<<sum<<endl;
	return 0;
}
