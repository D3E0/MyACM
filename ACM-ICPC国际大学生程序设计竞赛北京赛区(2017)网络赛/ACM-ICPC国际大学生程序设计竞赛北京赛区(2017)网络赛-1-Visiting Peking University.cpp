#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#define INF 0x3f3f3f3f
using namespace std;
const int MAX = 1005;
int p[MAX];
int main()
{
	int m,n,q;
	while(cin>>n>>m)
	{
		vector<int> p;
	    for(int i = 0; i < n; ++i)
	    {
		    int x;
		    cin>>x;
		    p.push_back(x);
	    }
	    cin>>q;
	    for(int i = 0; i < q; ++i)
	    {
		    int x;
		    cin>>x;
            p[x] = INF;
	    }
	    int begin,end,day,Min,MinBegin,MinEnd;
	    begin = end = day = MinBegin = MinEnd = 0;
	    Min = INF;
	    for(int i = 0; i < n; ++i)
	    {
	        end = i;
		    if(p[i] == INF)
	        continue;
		    else
		    ++day;				
		    if(day>=m)
		    {
			    for(int j = begin + 1; j <= end; ++j)
			    {
				    if(p[begin] + p[j] < Min)
				    {
					    MinBegin = begin;
				        MinEnd = end; 
				        Min = p[begin] + p[j]; 
				    }
			    }
                ++begin;
                --day;
		    }		
	    }
	    cout<<MinBegin<<' '<<MinEnd<<endl;
	}	
	return 0;
}
