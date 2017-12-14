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
�����¼��ࣺ
R��1:
�����������ڲ����
0��

R==2:
����1��
1��

L��1:
��һ��ֻ��1���-> 0 1
֮��
2 1
2 3
4 3
���������������ĵ�
����(R-1)/2+1

R?L<=2:
��һ��L2+0.5
�ڶ���L2+1.5
����2

�������
��һ��L2+0.5
�ڶ���L2+1.5
֮��2���2�������������ǰ������ٵı����
�����տ�����1����ڲ���У����Կ��Ե��ɲ����[L,R-1],Ȼ��Ѳ�����ա�
����Ϊ(R-L)/2+1*/
