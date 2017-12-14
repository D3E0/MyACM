#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string light;
	char l[4];
	int v[4];
	map<char,int> k;
	while(cin>>light)
	{
		k['R']=0;
		k['B']=0;
		k['Y']=0;
		k['G']=0;
		v[0]=v[1]=v[2]=v[3]=0;
		for(int i=0;i<light.length();i+=4)
		{
			for(int j=0;j<4;j++)
			{
				if(light[i+j]!='!'&&!v[j])
				{
					l[j]=light[i+j];
					v[j]=1;
				}			
			}
		}
		for(int i=0;i<light.length();i++)
		{
			if(light[i]=='!')
			{
				switch (i%4)
				{
					case 0: k[l[0]]++;break;
				    case 1: k[l[1]]++;break;
				    case 2: k[l[2]]++;break;
				    case 3: k[l[3]]++;break;
				}
				
			}
		}
		cout<<k['R']<<" "<<k['B']<<" "<<k['Y']<<" "<<k['G']<<endl;
	}
	return 0;
}
