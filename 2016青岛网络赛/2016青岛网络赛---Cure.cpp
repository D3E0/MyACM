#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
typedef long long LL;
const LL MAXN = 1000000;
double a[MAXN + 5];
int main()
{
    for(LL i = 1; i <= MAXN; i++)
    a[i] += (1.0 / i) * (1.0 / i) + a[i - 1];
    string str;
    while(cin>>str)
    {
  	    if(str.length() > 6)
  	    printf("%.5lf\n",a[MAXN]);
		else
		{
			stringstream stream1;
			stream1.str(str);
            LL ans;
            stream1 >> ans;
            printf("%.5lf\n",a[ans]); 
		}
    }
    return 0;
}
