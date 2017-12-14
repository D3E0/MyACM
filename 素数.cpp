#include <iostream>
#include <cmath>
using namespace std;

bool solve()
{
	for(int i = 2;i<sqrt(9973);++i)
	{
		if(9973%i == 0)
		{
			cout<<i<<" "<<9973/i<<" "<<9973%i<<endl;
			return false;
		}
		
	}
	return true;
}

int main()
{
	cout<<solve()<<endl;
	return 0;
 } 
