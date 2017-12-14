#include<bits/stdc++.h>
using namespace std;

int n,m;
string s[505];
int mp[505][505];
int vis[505][505];
int main()
{
    while(cin>>n>>m)
    {
    	for(int i=0;i<n;i++)
        cin>>s[i];
        int stx=0,sty=0;
        int len1 = 0;
        int len2 = 0;
        int flag = 0;
        for(int i=0;i<n;i++)
		{
            for(int j=0;j<m;j++)
			{
                if(s[i][j]=='X')
				{
                    stx=i,sty=j;
                    for(int k=0;k+j<m;k++)
					{
                        if(s[i][j+k]=='X')
						len1++;
                        else 
						break;
                    }
                    for(int k=0;k+i<n;k++)
					{
                        if(s[i+k][j]=='X')
						len2++;
                        else 
						break;
                    }
                    flag = 1;
                    break;
                }
            }
            if(flag)
			break;
        }
        flag = 0;
        for(int i=0;i<len2;i++)
		{
            for(int j=0;j<len1;j++)
			{
                if(s[stx+i][sty+j]!='X')
                flag = 1;
                vis[stx+i][sty+j]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		if(s[i][j]=='X'&&vis[i][j]==0)
                flag = 1;
			}      
		}       
        if(flag)
		cout<<"NO"<<endl;
        else 
		cout<<"YES"<<endl;
	}    
}
