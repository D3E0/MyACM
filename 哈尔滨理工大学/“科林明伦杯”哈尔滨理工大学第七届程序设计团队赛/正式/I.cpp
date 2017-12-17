#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int dp[100005];
int len2[100005];
int main(){
	int t;
	int  n;
	cin>>t;
	cin>>n;
	while(t--){
		int a[100005],d[100005];
		memset(dp,0,sizeof(dp));
		memset(len2,0,sizeof(len2));
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		for(int i=0;i<n;i++){
			cin>>d[i];
		} 
		int len1=1;
		len2[1]=d[0];
		dp[1]=a[0];
		dp[0]=0;
		int max=0;
		for(int i=1;i<n;i++){
			int pos=0;
			if(dp[len1]<a[i]){
				len1++;
				len2[len1]+=len2[len1-1]+d[i];
				dp[len1]=a[i];				
			}
			else if(dp[len1]>a[i]){
				pos=lower_bound(dp+1,dp+len1,a[i])-dp;
				dp[pos]=a[i];
				if(len2[pos]>d[i]+len2[pos-1]&&len2[pos]>max){
					max=len2[pos];
				}
				len2[pos]=d[i]+len2[pos-1];
			}
			else{
				if(len2[len1]<d[i]+len2[len1-1]){
					len2[len1]=d[i]+len2[len1-1];
				}
			}
		}
		for(int i=1;i<=len1;i++){
			if(len2[i]>max){
				max=len2[i];
			}
		}
		printf("%d\n",max);
	}
}
/*
13212
5
5 4 3 2 1
1 2 3 4 5
*/
