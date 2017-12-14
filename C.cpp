#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		vector<char> a, b;
		a.push_back('1');
		while(--n)
		{
			int count = 1;
			char now = a[0];
			for(int i = 1; i < a.size(); ++i)
			{
				if(a[i] == now)
				++count;
				else
				{
					b.push_back(count + '0');
					b.push_back(now);
					now = a[i];
					count = 1;
				}
			}
			b.push_back(count + '0');
			b.push_back(now);
			a = b;
			b.clear();		
		}
		for(int i = 0; i < a.size(); ++i)
			cout<<a[i];
			cout<<endl;
	}	
	return 0;
 } 
