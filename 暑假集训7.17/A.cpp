#include <iostream>
#include <cmath>

using namespace std;
typedef long long LL;
LL n;
LL flag[200];
void k()
{
	flag[0]=1;
	flag[1]=2;
	flag[2]=3;
	flag[3]=5;
	for(int i=4;i<200;i++)
	flag[i]=flag[i-1]+flag[i-2];
}
int main()
{
	k();
	while(cin>>n)
	{
		for(int i=1;i<200;i++)
		{
            if(n<flag[i])
            {
            	cout<<i-1<<endl;
            	break;
			}           			
		}
	}
}
