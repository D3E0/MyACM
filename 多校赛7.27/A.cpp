#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int T,N,X,Y;
	string a,b;
	cin>>T;
	while(T--)
	{
		cin>>N>>X>>Y>>a>>b;
		int same,dif;
		same=dif=0;
		for(int i=0;i<N;i++)
		{
			if(a[i]==b[i])
			same++;
		}
		dif=N-same;
		int Max,Min;
		if(Y<=same)
		Max=N-same+Y;
		else
        Max=N-Y+same;
        if(Y<=dif)
        Min=0;
        else
        Min=Y-dif;
		if(X<=Max&&X>=Min)
		cout<<"Not lying"<<endl;
		else
		cout<<"Lying"<<endl;
	}
	return 0;
}
