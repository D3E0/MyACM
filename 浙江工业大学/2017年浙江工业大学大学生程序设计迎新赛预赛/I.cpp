#include<iostream>
using namespace std;
int main(){
	int n, t;
	bool flag;
	cin>>n;
	for(int i = 1; i <= n; ++i){
		if(i % 4 == 0) continue;
		t = i;
		flag = true;
		while(t > 0){
			if(t % 10 == 4){
				flag=false;
				break;
			}
			t /= 10;
		}
		if(flag) cout << i << endl;
	}
	return 0;
} 
