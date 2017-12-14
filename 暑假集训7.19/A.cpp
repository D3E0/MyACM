#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
         while(a)
         {
         	if(2*a>b)
         	{
         		a--;
         		continue;
			}
         	else if(4*a>c)
         	{
         		a--;
         		continue;
			}
			else
			{
				cout<<7*a<<endl;
				break;
			}
		 }
		 if(a==0)
		 cout<<0<<endl;		
	}
	 return 0;
}
