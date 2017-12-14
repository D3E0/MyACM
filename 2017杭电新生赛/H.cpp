#include<iostream>
#include<map>
#include<cstring>
#include<cmath>
#include <bitset>
using namespace std;
int main() {
    int n;
    map<int, int> m;
    while (cin >> n) {
        long long int ans = 0;
        long long int num;
        m.clear();
        while (n--) {
            cin >> num;
            int a[10];
            memset(a, 0, sizeof(a));
            if (num == 0)
                a[0]++;
            while (num > 0) {
                int temp = num % 10;
                a[temp]++;
                num /= 10;
            }
            for(int i = 0; i < 10; ++i)
            cout<<"a["<<i<<"] = "<<a[i]<<' ';
            cout<<endl;
            int flag = 0;
            for (int i = 0; i < 10; i++) {
                flag <<= 1;
                cout<<"flag = "<<flag<<endl;
                if (a[i])
                {
                	flag |= 1;
                	cout<<"flag | 1 = "<<flag<<endl;
				}
                    
            }
            cout<<bitset<10>(flag)<<endl;
            m[flag]++;
        }
        map<int, int>::iterator it1, it2;
        it1 = m.begin();
        while (it1 != m.end()) {
            it2 = it1;
            it2++;
            while (it2 != m.end()) {
                if (it1->first & it2->first)
                    ans += it1->second * it2->second;
                it2++;
            }
            for (int i = 1; i <= it1->second - 1; i++) {
                ans += i;
            }
            it1++;
        }
        cout << ans << endl;
    }
}
