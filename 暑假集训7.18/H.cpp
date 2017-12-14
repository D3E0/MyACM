#include <cstdio>  
#include <string> 
#include <iostream> 
using namespace std;  
  
int main()  
{  
    int k,len,zhouqi;  
	string s;       
    while(cin>>s)  
    {              
        len = s.length();  
        k=0;  
        for(int i = 0; i < len/2+1; i++)  
        {  
            k++;  
            if(len%k == 0)  
            {  
                zhouqi=1;  
                for(int j = 0; j < k; j++)  
                {  
                    for(int l = k; l+k <= len; l+=k)  
                    {   
                        if(s[j]!=s[l+j])
						{
						    zhouqi = 0;
							break;
						}   
                    }  
                    if(!zhouqi)
					break;  
                }  
            }  
            if(zhouqi) break;  
        }  
        if(!zhouqi) k = len;     
        cout<<k<<endl;  
    }  
}  
