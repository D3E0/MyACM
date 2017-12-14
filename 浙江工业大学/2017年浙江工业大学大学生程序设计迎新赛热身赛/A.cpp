#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int t;
    int a,b;
    double max;
    char name[45];
    char ans[45];
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        max=0;
        while(n--){
            scanf("%s %d %d",name,&a,&b);
            if(a*1.0/b>max){
                max=a*1.0/b;
                strcpy(ans,name);
            }
        }
        cout<<ans<<endl;
    }
}
