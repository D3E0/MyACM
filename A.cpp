#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	int n, val, c;
	while(cin >> n >> val)
	{
		vector<int> v;
		while(n--)
		{
			cin >> c;
			if(c != val)
			v.push_back(c);
		}
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); ++i)
		{
			if( i != v.size() - 1)
			cout << v[i] << ' ';
			else
			cout << v[i];
		}
		cout << endl; 
	}	
	return 0;
 } 
