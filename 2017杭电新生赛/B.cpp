#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

const int v[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char yu[] = {'1','0','X','9','8','7','6','5','4','3','2'};

int main()
{
	int n;
	while(cin >> n)
	{
		int year, month, day;
		string id;
		scanf("%d-%d-%d",&year, &month, &day);
		while(n--)
		{
			cin >> id;
			int iyear = 0, imonth = 0, iday = 0, age = 0;
			long long sum = 0;
			for(int i = 0; i < 18; ++i)
			{
				if(i != 17)
				sum += (id[i] - '0') * v[i];
				if(i>=6 && i <= 9)
				iyear = 10 * iyear + (id[i] - '0');
				else if(i>=10 && i <= 11)
				imonth = 10 * imonth + (id[i] - '0');
				else if(i>=12 && i <= 13)
				iday = 10 * iday + (id[i] - '0');
			}
			cout<<sum<<endl;
			sum %= 11;
			if(year - iyear > 18)
			{
				age = 1;
			}
			else if(year - iyear == 18 && (month > imonth||(month == imonth && day >= iday)))
			{
				age = 1;
			}
			cout<<sum<<' '<<age<<endl;
			if(yu[sum] == id[17] && age)
			cout<<"Accepted"<<endl;
			else
			 cout<<"Sorry"<<endl;
		}
	}
	return 0;
 } 
