#include <iostream>
#include <string>
using namespace std;
int main()
{
	cin.sync_with_stdio(false);
	int v1, v2, t, s, l;
	cin >> v1 >> v2 >> t >> s >>l;
	if(v2 > v1)
	cout << 'T' << endl << l / v2 << endl;
	else if(v2 == v1)
	cout << 'D' << endl << l / v2 << endl;
	else
	{
		int s1 = 0, s2 = 0, time = 0;
		while(l > s1 && l > s2)
		{
			s1 += v1;
			s2 += v2;
			time++;
			if(s1 >= l || s2 >= l)
			break;
			if(s1 - s2 >= t)
			{
				time += s; 
				s2 += s*v2;
			}
		}		
		if(s1 >= l && s2 >= l)
		cout << 'D' << endl << l / v2 << endl;
		else if(s1 >= l)
		cout << 'R' << endl << time << endl;
		else
		cout << 'T' << endl << l / v2 << endl;
	}
	return 0;
}

