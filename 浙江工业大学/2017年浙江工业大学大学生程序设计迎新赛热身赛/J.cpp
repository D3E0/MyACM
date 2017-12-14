#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int a){
	int m = sqrt(a);	
	for(int i = 3; i <= m; ++i)
		if(a % i == 0)
			return false;
	return true;
	
}

int main(){
	int T, n;
	cin >> T;
	while(T--)
	{
		cin >> n;
		if(n % 2 == 0 && n != 2) cout << 2 << endl;
		else
		{
			if(isprime(n)) cout << 1 << endl;
			else if(isprime(n - 2)) cout << 2 << endl;
			else cout << 3 << endl;
		}
	}
	return 0;
} 
