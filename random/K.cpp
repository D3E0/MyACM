#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;

class node
{
public:
	int k, s, q;
};
int main()
{
	cin.sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		//getchar();
		map<string, node> m;
		map<string, node>::iterator it;
		string str;
		char num, g;
		while (n--)
		{
			cin >> num >> str;
			//getchar();
			if (num == 'A')
			{
				it = m.find(str);
				if (it != m.end())
				{
					node x = m[str];
					if (x.s >= x.k)
					{
						if(x.q >= x.s)
							cout << "q=" << x.q << endl;
						else
							cout << "s=" << x.s << endl;
					}
					else
					{
						if(x.q >= x.k)
							cout << "q=" << x.q << endl;
						else
							cout << "k=" << x.k << endl;
					}
				}
				else
					cout << 'N' << endl;
			}
			else
			{
				cin >> g;
				it = m.find(str);
				node y;
				if (it != m.end())
					y = m[str];
				else
				{
					y.k = 0;
					y.q = 0;
					y.s = 0;
				}
				if ('q' == g)
					y.q++;
				else if ('s' == g)
					y.s++;
				if ('k' == g)
					y.k++;
				m[str] = y;
				cout << 'Y' << endl;
			}
		}
	}
	return 0;
}
