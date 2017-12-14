#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int t,flag,sum4,sum7;
	char qz[2];
	cin>>t;
	while(t--){
		sum4=sum7=flag=0;
		char x[12];
		char str[12];
		scanf("%s",x);
		int len=strlen(x);
		int i=0;
		while(i<len){
			if(x[i]-'0'<=4){
				str[i]='4';
			}
			else if(x[i]-'0'>4){
				str[i]='7';
			}
			else
				str[i]='*';
			i++;
		}
		i=0;
		int flag2=1;
		while(i<len){
			if(str[i]=='*'){
				str[i]='4';
				int j=i-1;
				while(j--){
					if(str[j]=='4'){
						str[j]='7';
						flag2=0;
						break;
					}
				}
				if(j==0&&flag2){
					qz[0]='4';
					flag++;
				}				
			}
			i++;
		}
		i=0;
		while(i<len){
			if(str[i]=='4')
			sum4++;
			if(str[i]=='7')
			sum7++;
			i++;
		}
		i=len-1;
		while(i>=0){
			if(sum4>sum7+1){
				if(str[i]=='4')
				{
					str[i]='7';
					sum4--;
					sum7++;
				}
			}
			if(sum7>sum4+1){
				if(str[i-1])
			}
		}
		while(i<flag){
			if(qz[i]=='4')
			sum4++;
			if(qz[i]=='7')
			sum7++;
			i++;
		}
		if(sum4==sum7){
			while(flag--)
			printf("%s",qz[2-flag]);
			str[len]='\0';
			printf("%s\n",str);
		}
		else
		{
			if(sum4>sum7){
				if(flag==1){
					qz[1]='4';
					qz[0]='7';
					flag++;
				}
				if(flag==0){
					qz[0]='7';
					flag++;
				}				
			}
			while(flag--)
			printf("%s",qz[2-flag]);
			str[len]='\0';
			printf("%s\n",str);
		}
	}
}
