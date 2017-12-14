#include <iostream>
#include <time.h>
using namespace std;

int gcd(int a, int b){ // µÝ¹é 
	if(b == 0)
	return a;
	return gcd(b, a % b);	
}

int gcd1(int a, int b){ //·ÇµÝ¹é 
	while(b)
	{
		int temp = a % b;		
		b = temp;
		a = b;
		cout << a <<' ' <<b<<endl;
	}
	return a;	
}

int e_gcd(int a, int b, int &x, int &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}
	int ans = e_gcd(b, a % b, x, y);
	int temp = x;
	x = y;
	y = temp - (a / b) * y;
	cout << " x = " << x << " y = " << y << " ans = " << ans <<endl;
	return ans;
}
 

int main(){
    ios::sync_with_stdio(false);
    clock_t  start = clock();
    int x = 0, y = 0;
    cout << e_gcd(5, 15, x, y);
	cout << " x = " << x << " y = " << y <<endl;
    //cout << (clock() - start) / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}
