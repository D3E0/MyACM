#include <iostream>
using namespace std;
int main()
{
	cin.sync_with_stdio(false);
	int n;
	while(cin >> n&&n)
	{
		int one = 0, two = 0, three = 0, four = 1;
		while(--n) {four += three; three = two;	two = one; one = four;} 
		cout<<four+three+two+one<<endl;
	}	
	return 0;
}

