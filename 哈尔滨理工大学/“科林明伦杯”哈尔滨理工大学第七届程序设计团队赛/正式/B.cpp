#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
typedef long long LL;
const int MAXN = 100005;
char str[MAXN];
const int er[4] = {6, 2, 4, 8};
int main(){
	int n;
	while(~scanf("%d", &n)){
		memset(str, 0 ,sizeof(str));
		scanf("%s", str);	
		LL sum  = 0;
		for(int i = n - 1; i >= 0; --i){
			if(str[n - i - 1] - '0' == 1){
				if(i != 0) sum += er[i % 4];
				else sum += 1;				
			}
		}
		if(sum % 5 == 0) cout << "Yes!" << endl;
		else cout << "No!" << endl;
	}
	return 0;
}
