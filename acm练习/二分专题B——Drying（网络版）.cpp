#include<cstdio>  
#include<algorithm>  
#include<vector>  
#include<set>  
#include<map>  
#include<iostream>  
#include<string>  
#include<cstring>  
#include<queue>  
#include<cmath>  
using namespace std;  
typedef long long LL;  
const int maxn = 100000 + 5;  
const int INF = 1000000000;  
  
int a[maxn];  
int n,k;  
  
bool can(int x){  
    int cnt = 0;  
    for(int i = 0;i < n;i++){  
        if(a[i] > x){  
            cnt += (a[i] - x + k - 2) / (k - 1);  
            if(cnt > x) return false;  
        }  
    }  
    return true;  
}  
  
int main(){  
    while(scanf("%d",&n) != EOF){  
        for(int i = 0;i < n;i++) scanf("%d",&a[i]);  
        sort(a,a+n);  
        scanf("%d",&k);  
        if(k == 1){  
            printf("%d\n",a[n-1]);  
            continue;  
        }  
        int l = 1,r = a[n-1];  
        int ans;  
        while(l <= r){  
            int mid = l+(r-l)/2;  
            if(can(mid)){  
                ans = mid;  
                r = mid-1;  
            }  
            else l = mid+1;  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
} 
