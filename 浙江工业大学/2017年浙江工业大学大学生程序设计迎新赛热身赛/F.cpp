#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
const int sum = 'a' + 'b' + 'c';
int solve(string str){
	stack<char> s;
	char topChar, nowChar;
    for(int i = 0; i < str.length(); ++i){
        if(s.empty() || str[i] == s.top()) s.push(str[i]);
        else{
            topChar = s.top();
            nowChar = str[i];
           	while(!s.empty() && topChar != nowChar){			    
				s.pop();
           		nowChar = sum - nowChar - topChar;
				if(s.empty()) break;  
				topChar = s.top();        		
			}
			s.push(nowChar);
		}
    }    
	return s.size();
}
int main(){
  	string str;
    while(cin >> str){        
        int i = solve(str);
        reverse(str.begin(), str.end());
        cout << min(i, solve(str)) <<endl;
    }
    return 0;
}
