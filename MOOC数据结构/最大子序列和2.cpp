#include <iostream>
#include <vector>
using namespace std;
typedef long long LL; 
const int MAXN = 10005;
int main()
{
	int n;
	cin >> n;
	LL a[MAXN];	
	vector<LL>v_sum,v_Max;
	
	for(int i = 0; i < n; i++)
	cin >> a[i];
	LL sum = 0,Max = -1;
	for(int i = 0; i < n; i++)
	{
	    sum += a[i];
	    v_sum.push_back(a[i]);
		if(sum > Max)
		{
			Max = sum;
			v_Max = v_sum;
		}		
		else if(sum < 0)
		{
			sum = 0;
			v_sum.clear();
		}						
	}
	if(Max < 0)
	cout << 0 << ' ' << a[0] << ' ' << a[n-1] << endl;
	else if(Max == 0)
	cout << Max << ' ' << v_Max.front() << ' ' << v_Max.back() << endl;
	else
    cout << Max << ' ' << v_Max.front() << ' ' << v_Max.back() << endl;
	return 0;
 } 
