#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int A,C,G,T,wen,n;
string gemo;
int main()
{
	while(cin>>n>>gemo)
	{
		if(n%4!=0)
	    cout<<"==="<<endl;
	    else
	    {
	    	A=C=G=T=wen=0;
		    for(int i=0;i<n;i++)
		    {
			    if(gemo[i]=='A')
			    A++;
			    else if(gemo[i]=='C')
			    C++;
			    else if(gemo[i]=='G')
			    G++;
			    else if(gemo[i]=='T')
			    T++;
			    else if(gemo[i]=='?')
			    wen++;
		    }
		    if(!(A<=n/4&&C<=n/4&&G<=n/4&&T<=n/4))
			cout<<"==="<<endl;
		    else
		    {
		        for(int i=0;i<n;i++)
		        {
		    	    if(gemo[i]=='?')
		    	    {
		    		    if(A<n/4)
		    		    {
		    			    cout<<'A';
		    			    A++;
					    }
					    else if(C<n/4)
					    {
						    cout<<'C';
						    C++;
					    }
					    else if(G<n/4)
					    {
						    cout<<'G';
						    G++;
					    }
					    else if(T<n/4)
					    {
						    cout<<'T';
						    T++;
					    }
				    }
				    else
				    cout<<gemo[i];
			    }
			    cout<<endl;
		    }
		}		    
	}
	return 0;
}
