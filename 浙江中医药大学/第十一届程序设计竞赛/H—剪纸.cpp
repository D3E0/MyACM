#include<cstdio>  
#include <cstring>
using namespace std;
int n;
int dir[4][2] = {-1, 0, 1, 0, 0, 1, 0, -1};  
int vis[12][12];  
int count = 0;  
void dfs(int x1, int y1, int x2, int y2){  
    if(x1 <= 0 || y1 >= n || y1 <= 0 || x1 >= n || x2 <= 0 || y2 >= n || y2 <= 0 || x2 >= n){  
        count++;  
        return;  
    }  
    
    int Nx1, Ny1, Nx2, Ny2;
    
    for(int i = 0; i < 4; ++i){  
        Nx1 = x1 + dir[i][0];  
        Ny1 = y1 + dir[i][1];  
        Nx2 = x2 - dir[i][0];  
        Ny2 = y2 - dir[i][1];  
        if(!vis[Nx1][Ny1]){  
            vis[Nx1][Ny1] = 1;  
            vis[Nx2][Ny2] = 1;  
            dfs(Nx1, Ny1, Nx2, Ny2);  
            vis[Nx1][Ny1] = 0;  
            vis[Nx2][Ny2] = 0; 
        }  
    }  
}  
int main(){  
	int T;
	scanf("%d", &T);
	while(T--){
		memset(vis, 0 ,sizeof(vis));
		count = 0;
		scanf("%d", &n);
    	int mid = n / 2;  
	    vis[mid][mid] = 1;  
	    dfs(mid, mid, mid, mid);  
	    printf("%d\n", count / 4);  
	}   
    return 0;  
}  
