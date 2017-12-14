#include<iostream>
#include<cstdio>
using namespace std;
int a[]={0,0,0,0,1,1,2,3,3,4,5,6,7,7,8,9,10,11,12,13,14};
int main()
{
    int t,n,count=0;
    cin>>t;
    while(t--)
    {
    	cin>>n;
        cout<<"Case #"<<++count<<": "<<a[n]<<endl;
	}
    return 0;
}

