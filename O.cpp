#include <iostream>
using namespace std;

int main()
{
	int x = 91, y = 100,n = 0;
	while(y > 0)
	{
		if(x > 100)
		{
			x = x - 10;
			y--;
		}
		else
		x++;
		n++;
	}
	cout<<n<<endl;
	return 0;
}
