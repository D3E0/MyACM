#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	string str;
	while(getline(cin, str)){
		int count = 0;
		int flag = 0;
		int is_out = 0;
		for(int i = str.length() - 1; i >= 0; --i){
			if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				flag = 1;
			else
				flag = 0;
			if(!flag && count > 0){
				cout << count << endl;
				is_out = 1;
				getchar();
				break;
			}
			if(flag){
				//cout << str[i] << endl;
				++count;
			}			
		}
		if(!is_out)
			cout << count << endl;
	}
	return 0;
}
