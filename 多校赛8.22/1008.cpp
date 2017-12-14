#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
typedef long long LL; 
map<LL,LL> v;

int main()
{
	int m;
	while(cin>>m)
	{
		v.clear();
		int n = sqrt(2*m);
		LL Max = 0,x,Min = 0x7fffffff;
		for(int i = 1; i <= m; i++)
		{
			cin>>x;
			v[x]++;
			Max = max(Max,x);
			Min = min(Min,x);
		}
		for(int i = Min; i <= Max; i++)
		{
			if(v[i] > 0)
			{
				int j = i;
				while(j <= Max)
			    {
			    	if(j == Min)
			    	{
			    		if(v[j] > 0)
			    	    {
			    		    v[i + j]-=(v[j]*(v[j] - 1))/2;
					    }
					}
					else
					{
						if(v[j] > 0)
			    	    {
			    		    v[i + j]--;;
					    }
					}			    	
					j++;		    
			    }
			}			
		}
		cout<<n<<' ';
		int count = 1;
		if(v[Min] > 1)
		{
			for(int i = 0; i < v[Min]; i++)
			{
				if(i == v[Min]-1)
				cout<<Min<<endl;
				else
				cout<<Min<<' ';
			}
		}
		else
		{
			for(int i = 1; ; i++)
		    {
			    if(v[i] == 1)
			    {
				    if(count == n)
				    {
					    cout<<i<<endl;
					    break;
				    }
				    cout<<i<<' ';
				    count++;
			    }
		    }
		}	
	}
	return 0;
}
