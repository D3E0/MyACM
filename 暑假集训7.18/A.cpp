#include <cstdio>
#include <iostream>
#include <string>
using namespace std; 
string k;;
int main()
{
	int n,a,b,a_p,b_p;
	while(cin>>n>>a>>b)
	{
		cin>>k;
		for(int i=0;i<k.length();i++)
		{
			if(i==a-1)
			a_p=k[i]-'0';
			if(i==b-1)
			b_p=k[i]-'0';
		}
		if(a_p!=b_p)
		cout<<1<<endl;
		else
		cout<<0<<endl;
		
	}
}
