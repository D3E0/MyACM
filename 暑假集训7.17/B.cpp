#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
bool is_primer(int num)
{
	int tmp =sqrt(num);  
    for(int i=2;i<=tmp; i++)
	{
		if(num%i==0)  
        return false ;
	}  
    return true ;   
}
int main()
{
	int n;			
	while(cin>>n)
	{	
		if(is_primer(n))
		cout<<1<<endl;
        else 
		{
			if(n%2==0)
            cout<<2<<endl;
            else
            {
        	    if(is_primer(n-2))
        	    cout<<2<<endl;
        	    else
        	    cout<<3<<endl;
		    }       
		}
	}
}

