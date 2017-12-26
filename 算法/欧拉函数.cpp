#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
long long phi(long long x)
{
    long long t=x,l=sqrt(x);
    for(long long i=2;i<=l;i++)
    if(x%i==0)
    {
        t=t/i*(i-1);   //欧拉函数公式，一定是先除再加
        while(x%i==0)
            x/=i;
    }
    if(x>1)     //对x大于sqrt(x)的质因子最多有1个
        t=t/x*(x-1);
    return t;
}
int main() {

    cout << phi(609929123) << endl;
}
