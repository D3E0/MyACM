
#include <iostream>
using namespace std;
typedef long long LL;
const LL mo = 609929123; 
LL quick(LL a, LL b, LL c)  
{  
    LL ans=1;   //��¼���  
    a=a%c;   //Ԥ����ʹ��a����c�����ݷ�Χ֮��  
    while(b!=0)  
    {  
        if(b&1) ans=(ans*a)%c;   //���b�Ķ�����λ����0����ô���ǵĽ����Ҫ���������  
        b>>=1;    //�����Ƶ���λ�������൱��ÿ�γ���2���ö����ƿ����������ǲ��ϵı���b�Ķ�����λ  
        a=(a*a)%c;   //���ϵļӱ�  
    }  
    return ans;  
}  

int main()
{
	cout << quick(6, 590253960 - 1, 609929123) << endl;
	return 0; 
}
