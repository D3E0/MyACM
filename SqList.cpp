#include <iostream>
#define LIST_INIT_SIZE 100;  //���Ա�洢�ռ�ĳ�ʼ������ 
#define LISTINCREMENT 10;    //���Ա�洢�ռ�ķ������� 
typedef int ElemType;
using namespace std;
typedef struct
{
	ElemType *elem;    //�洢�ռ��ַ
	int length;    //��ǰ����
	int listsize;    //��ǰ����Ĵ洢����(��sizeof(ElemType)Ϊ��λ) 
}SqList;

void InitList(List &L)
{
	
}

DestroyList(List &L)
{
	
}

ClearList(List &L)
{
	
}


int main()
{
	SqList L;
	InitList(L);
}
