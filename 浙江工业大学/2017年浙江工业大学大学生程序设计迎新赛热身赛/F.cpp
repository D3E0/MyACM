#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int solve(string str){
	stack<char> s;
    for(int i = 0; i < str.length(); ++i){
        if(s.empty() || str[i] == s.top())
            s.push(str[i]);
        else{
            char topChar = s.top();
            char nowChar = str[i];
           	while(!s.empty() && topChar != nowChar){			    
				s.pop();
           		if((nowChar == 'a' && topChar == 'b') || (nowChar == 'b' && topChar == 'a'))
					nowChar = 'c'; 	
            	else if((nowChar == 'a' && topChar == 'c') || (nowChar == 'c' && topChar == 'a'))
            		nowChar = 'b'; 
           		else if((nowChar == 'b' && topChar == 'c') || (nowChar == 'c' && topChar == 'b'))
           			nowChar = 'a'; 
				if(s.empty())
					break;  
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
