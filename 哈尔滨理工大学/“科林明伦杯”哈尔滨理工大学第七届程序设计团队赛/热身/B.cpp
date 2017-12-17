#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int m[n][n], i, j;
		for(i = 0; i < n; ++i){
			for(j = 0; j < n; ++j){
				cin >> m[i][j];
			}
		}
		
		for(i = 0; i < n; ++i){
			for(j = n - 1; j > 0; --j){
				cout << m[j][i] << ' ';
			}
			cout << m[j][i] << endl;
		}
	}
	return 0;
}
