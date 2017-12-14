#include <iostream>
#include <string>
using namespace std;
int main()
{
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
	string str;
	cin.clear();
	cin.ignore();
	while(n--)
	{		
		getline(cin,str);
		cout<<str<<endl<<endl;		
	}
	while(cin>>str)
	cout<<str<<endl<<endl; 
	return 0;
}

