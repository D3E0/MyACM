#include <iostream>
using namespace std;
typedef long long LL;

LL Tea(LL l,LL r){
    if(r <= 1) return 0;
    if(r <= 2) return 1;
    if(l <= 1) return (r-1)/2+1;
    if(r-l <= 2) return 2;
    return 1+(r-l)/2;
}
int main()
{
    LL l,r;
    while(cin>>l>>r)
    cout<<Tea(l,r)<<endl; 	
	return 0;
}

/*
分以下几类：
R≤1:
不倒，都留在茶壶里
0步

R==2:
倒出1杯
1步

L≤1:
第一杯只能1体积-> 0 1
之后
2 1
2 3
4 3
这种两体积两体积的倒
步数(R-1)/2+1

R?L<=2:
第一杯L2+0.5
第二杯L2+1.5
步数2

其余情况
第一杯L2+0.5
第二杯L2+1.5
之后2体积2体积倒，倒到当前体积较少的杯子里。
但最终可以留1体积在茶壶中，所以可以当成茶体积[L,R-1],然后把茶壶倒空。
步数为(R-L)/2+1*/
