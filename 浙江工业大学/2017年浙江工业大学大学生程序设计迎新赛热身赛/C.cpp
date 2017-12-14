#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int hanglieshi(int a,int b,int c,int d){
	return a*d-b*c;
}
int main(){
	int n;
	int x1,x2,x3,y1,y2,y3;
	int line1x,line1y,line2x,line2y;
	int linex,liney;
	cin>>n;
	while(n--){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		line1x=x2-x1;
		line1y=y2-y1;
		line2x=x3-x1;
		line2y=y3-y1;
		linex=0-x1;
		liney=0-y1;
		double a,b;
		a=hanglieshi(linex,line2x,liney,line2y)*1.0/hanglieshi(line1x,line2x,line1y,line2y);
		b=hanglieshi(line1x,linex,line1y,liney)*1.0/hanglieshi(line1x,line2x,line1y,line2y);
		if(a>0&&b>0&&a+b<1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
} 
