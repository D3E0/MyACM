#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,d;
	while(cin>>m>>d)
	{
		int day=0;
		if(d!=1)
		day+=d-1;
		if(m==4||m==6||m==9||m==11)
		cout<<ceil((day+30)/7.0)<<endl;
		else if(m==2)
		cout<<ceil((day+28)/7.0)<<endl;
		else
		cout<<ceil((day+31)/7.0)<<endl;
	}
	return 0;
 } 
