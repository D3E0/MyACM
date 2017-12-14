#include<iostream>  
using namespace std;  
int a[15],b[15];  

int gcd(int a,int b)  
{  
    if(a%b)  
    return gcd(b,a%b);  
    return b;  
}  
 
int main()  
{  
    int t,n,i,x,y,z,k,count=1;  
    cin>>t;  
    while(t--)  
    {  
        scanf("%d",&n);  
        for(i=1;i<=n;i++)  
        cin>>a[i]; 
        for(i=1;i<=n;i++)  
        cin>>b[i];
        y=a[n];x=b[n];  
        for(i=n-1;i>0;i--)  
        {  
            z=y;  
            y=y*a[i]+x;  
            x=z*b[i];  
        }  
        k=gcd(x,y);  
        cout<<"Case #"<<count++<<": "<<x/k<<' '<<y/k<<endl;
    }  
    return 0;  
}  

