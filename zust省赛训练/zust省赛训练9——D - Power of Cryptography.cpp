#include <iostream>  
#include <cstring>  
#include <cmath>  
#include <cstdio>  
using namespace std;  
double a,b,x;  
int main()  
{  
    while(~scanf("%lf%lf",&a,&b))  
    {        
        cout<<pow(b,1.0/a)<<endl;  
    }  
    return 0;  
}  
