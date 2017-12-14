#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

map<string,double> f;


int main()
{
	f["UTC"]=0;
	f["GMT"]=0;
	f["BST"]=1;
	f["IST"]=1;
	f["WET"]=0;
	f["WEST"]=1;
	f["CET"]=1;
	f["CEST"]=2;
	f["EET"]=2;
	f["EEST"]=3;
	f["MSK"]=3;
	f["MSD"]=4;
	f["AST"]=-4;
	f["ADT"]=-3;
	f["NST"]=-3.5;
	f["NDT"]=-2.5;
	f["EST"]=-5;
	f["EDT"]=-4;
	f["CST"]=-6;
	f["CDT"]=-5;
	f["MST"]=-7;
	f["MDT"]=-6;
	f["PST"]=-8;
	f["PDT"]=-7;
	f["HST"]=-10;
	f["AKST"]=-9;
	f["AKDT"]=-8;
	f["AEST"]=10;
	f["AEDT"]=11;
	f["ACST"]=9.5;
	f["ACDT"]=10.5;
	f["AWST"]=8;
	int N;
	cin>>N;
	for(int i = 0; i < N; ++i)
	{
		string time,ap,Area1,Area2;
		int ti = 0;
		cin>>time;
		if(time == "noon")
		ti = 12 * 60;
		else if(time == "midnight")
		ti = 0;
		else
		{
			int temp = 0;
	        for(int i = 0; i < time.length(); ++i)
	        {
		        if(time[i] == ':')
		        {
		        	temp *= 60;
		        	ti = temp;
		        	temp = 0;
				}
		        else
		        {
                    temp = temp * 10 + (time[i]-'0');
		        }
	        }
	        ti += temp;
	        cin>>ap;
	        if(ap == "a.m.")
	        {
	        	if(ti < 13 *60&&ti>12 * 60)
	        	ti -= 12*60;
			}
	        else if(ap == "p.m.")
	        {
	        	if(ti < 12 *60)
	        	 ti+=12*60;
			}  
		}
		cin>>Area1>>Area2;
		double tt =f[Area2] - f[Area1];
		if(tt < 0)
		tt+=24;
		ti += tt * 60;
		if(ti >= 24*60)
		ti-=24*60;
		int hour = ti / 60;
		int min = ti % 60;	
		if(hour == 12&&min == 0)
		cout<<"noon"<<endl;
		else if(hour == 0&&min == 0)
		cout<<"midnight"<<endl;
		else
		{
			if(hour >= 12)
			{
				ap = "p.m.";
				if(hour != 12)
				hour-=12;
			}
			else
			{
				ap = "a.m.";
				if(hour == 0)
				hour = 12;
			}		
			printf("%d:%02d ",hour,min);
			cout<<ap<<endl;
		}
	}
	return 0;	
}
