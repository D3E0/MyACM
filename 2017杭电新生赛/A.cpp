#include <iostream>

using namespace std;

int main()
{
	int c;
	cin >> c;
	while(c--)
	{
		int a,b,c,d, sum = 0;
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		if(a >= 85 && d >= 85 && b >= 55 && c >= 55 && sum >=305)
		{
			if(sum >= 370)
			cout<<'A'<<endl;
			else
			cout<<'B'<<endl;
		}
		else
		cout<<'C'<<endl;
	}
	return 0;
 } 
