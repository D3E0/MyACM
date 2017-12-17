#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
bool flag;  //ÅÐ¶ÏÕý·´ 
bool cmp(const int &a, const int &b){
	if(flag) return a<b;
	else return a>b;
}
int main(){
	deque<int> d;
	int n, m, x, num;
	cin >> n >> m;
	flag = true;
	while(m--){
		cin >> x;
		switch(x){
			case 1:	
				cin >> num;
				if(flag) d.push_front(num);
				else d.push_back(num);
				break;
			case 2: 
				if(flag) d.pop_front();
				else d.pop_back();
				break;
			case 3: 
				scanf("%d", &num);
				if(flag) d.push_back(num);
				else d.push_front(num);
				break;
			case 4: 
				if(flag) d.pop_back();
				else d.pop_front();
				break;
			case 5:	
				flag =! flag;
				break;
			case 6:	
				cout << d.size() << endl;
				if(flag){
					deque<int>::iterator iter = d.begin();
					for(; iter != d.end() - 1; ++iter)
 						cout << *iter << ' ';
					cout << *iter << endl;
				}else{
					deque<int>::iterator iter = d.end() - 1;
					for (; iter != d.begin(); --iter)
						cout << *iter << ' ';
					cout << *iter << endl;	
				}
				break;
			case 7:	
				sort(d.begin(), d.end(), cmp);
				break;
		}
	}
	return 0;
} 
