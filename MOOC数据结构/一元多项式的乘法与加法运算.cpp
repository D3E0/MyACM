#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int a_m,b_m;
	vector<pair<int,int>> a,b;
	map<int,int> c,c1;
	pair<int,int> p;
	set<int> d,d1;
	cin>>a_m;
	for(int i = 0; i < a_m; i++)
	{
		cin>>p.first>>p.second;		
		a.push_back(p);
		d1.insert(p.second);
		c1[p.second] += p.first;
	}
	cin>>b_m;
	for(int i = 0; i <b_m; i++)
	{
		cin>>p.first>>p.second;		
		b.push_back(p);
		d1.insert(p.second);
		c1[p.second] += p.first;
	}
	for(int i = 0; i < a_m; i++)
	{

		for(int j = 0; j <b_m; j++)
		{
			c[a[i].second + b[j].second] += a[i].first * b[j].first;
            d.insert(a[i].second + b[j].second);
		}
	}
	if(d.size() == 0)
	cout<<0<<' '<<0<<endl;
	else
	{
		for(set<int>::reverse_iterator rit = d.rbegin(); rit != d.rend(); rit++)
	    {
		    if(c[*rit] != 0 || *rit == 0)
		    {
		        set<int>::reverse_iterator ri = rit;
		        if(++ri != d.rend())
	 	        cout<<c[*rit]<<' '<<*rit<<' ';
		        else
		        cout<<c[*rit]<<' '<<*rit<<endl;
		    }		
	    }
	}
	if(d1.size() == 0)
	cout<<0<<' '<<0<<endl;
	else
	{
		for(set<int>::reverse_iterator rit = d1.rbegin(); rit != d1.rend(); rit++)
	    {
		    if(c1[*rit] != 0 || *rit == 0)
		    {
			    set<int>::reverse_iterator ri = rit;
		        if(++ri != d1.rend())
		        cout<<c1[*rit]<<' '<<*rit<<' ';
		        else
		        cout<<c1[*rit]<<' '<<*rit<<endl;
		    }		
	    }
	}		
	return 0;
}
