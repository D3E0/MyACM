#include <iostream> 
#include <algorithm>
#include <string>
using namespace std;      
int main()  
{  
	cin.sync_with_stdio(false);
 	string a, b;
 	cin>>a>>b;
 	reverse(a.begin(), a.end());
 	reverse(b.begin(), b.end());
 	if( a.length() > b.length())
 	swap(a, b);
	int temp = 0;
	b[b.length()] = '0';
 	for(int i = 0; i <= b.length(); ++i)
 	{
 		int A, B;
		A = i >= a.length() ? 0 : a[i] - '0';
		B = i >= b.length() ? 0 : b[i] - '0';
		int sum = A + B + temp;
		if(sum >= 10)
			temp = 1;
		else
			temp = 0; 
		b[i] = sum % 10 + '0';	
	}
	if(b[b.length()] > '0')
	cout << b[b.length()];
	reverse(b.begin(), b.end());
	cout << b <<endl;
 	return 0;    
}  

