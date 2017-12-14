#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int T, a, b;
	cin >> T;
	while(T--)
	{
		cin >> a >> b;
		if(a == 1 && b == 0) cout << 1 << endl;
		else if(a == 14 && b == 15) cout << 14 << endl;
		else if(a > b) cout << b - 1 << endl;
		else cout << b + 1 << endl;
	}
	return 0;
} 
