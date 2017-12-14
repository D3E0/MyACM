#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define kind 26
const int MAXN = 10000000;
struct node
{
    int count; //�Ƿ�Ϊ�������һ���ڵ�
    node *next[26];//Trieÿ���ڵ��26���ӽڵ�
    node *fail; //ʧ��ָ��
};
node *q[MAXN]; //���У�����bfs ����ʧ��ָ��
char keyword[55000];//���뵥�� ģʽ��
char str[1000010];// ��Ҫ���ҵ� ����
int head,tail;//���� ͷβָ��
node *root;
void insert(char *word,node *root)
{
     int index,len;
     node *p = root,*newnode;
     len = strlen(word);
     for(int i=0 ;i < len ; i++ )
     {  
         index=word[i]-'a';
         if(!p->next[index])//���ַ��ڵ㲻���ڣ�����Trie����
         {
           // ��ʼ�� newnode �� ���� Trie ��
            newnode=(struct node *)malloc(sizeof(struct node));    
            for(int j=0;j<26;j++) newnode->next[j]=0;
            newnode->count=0;newnode->fail=0;
            p->next[index]=newnode;
         }
         p=p->next[index];//ָ���ƶ�����һ��
     }
     p->count++;  //���ʽ�β �ڵ� count + 1 �����  
}
void build_ac_automation(node *root)
{
     head=0;tail=1;
     q[head]=root;
     node *temp,*p;
     while(head<tail)//bfs���� Trie����ʧ��ָ��
     {
       //�㷨���� kmp �������൱�ڵõ� next[]����
       //�ص����ڣ�ƥ��ʧ��ʱ����failָ����ݵ���ȷ��λ��
       
        temp=q[head++];
         for(int i=0;i< 26 ;i ++)
         {
             if(temp->next[i])//�ж�ʵ�ʴ��ڵĽڵ�
             {
                 // root �µĵ�һ�� �ڵ� �� ʧ��ָ�붼 ָ��root
                 if(temp==root)temp->next[i]->fail=root;
                 else {
                    //���λ��� �ýڵ�ĸ��ڵ��ʧ��ָ��
                   //֪��ĳ�ڵ��next[i]��ýڵ���ͬ����
                   //�Ѹýڵ��ʧ��ָ��ָ���next[i]�ڵ�
                   //�����ݵ� root ��û���ҵ�����ýڵ�
                   //��ʧ��ָ�� ָ�� root
                  
                    p=temp->fail;//temp Ϊ�ڵ�ĸ�ָ��
                    while(p){
                       if(p->next[i]){
                       temp->next[i]->fail=p->next[i];
                       break;
                       }
                       p=p->fail;
                    }
                    if(!p)temp->next[i]->fail=root;
                 }
                 //ÿ����һ���㣬�Ͱ��������ж��Ӽ�����У�           
                 //ֱ������Ϊ��
                 q[tail++]=temp->next[i];
             }
         }                
     }
}
int query(node *root)//������ kmp�㷨��
{//iΪ����ָ�룬pΪƥ�䴮ָ��
    int i,cnt=0,index,len=strlen(str);
    node *p=root;
    for(i=0; i < len ;i ++)
    {
       index=str[i]-'a';
      //��ʧ��ָ�����Ѱ�ң��ж�str[i]�Ƿ������Trie����
       while( !p->next[index] && p != root)p=p->fail;
       p=p->next[index];//�ҵ��� p ָ��ýڵ�
     
       //ָ���Ϊ�գ���û���ҵ���֮ƥ����ַ�
      
       if(!p)p=root;//ָ�����»ص����ڵ�root���´δ�root��ʼ����Trie��
      
       node *temp=p;//ƥ��ýڵ������ʧ��ָ����ݣ��ж������ڵ��Ƿ�ƥ��
      
       while(temp != root )//ƥ�� ��������
       {
           if(temp->count>=0)//�ж� �ýڵ��Ƿ񱻷���
           {
              //ͳ�Ƴ��ֵĵ��ʸ���cnt�����ڽڵ㲻�ǵ��ʽ�βʱcountΪ0��
             //�� cnt+=temp->count; ֻ�� count >0ʱ������ͳ���˵��ʸ���
            
             cnt+=temp->count;
              temp->count=-1; //����ѷ���
           }
           else break;//�ڵ��ѷ��ʣ��˳�ѭ��
           temp=temp->fail;//����ʧ��ָ�����Ѱ����һ�����������Ľڵ�     
       }
    }
    return cnt;
}
int main()
{
    int i,t,n,ans;
    scanf("%d",&t);
    while(t--)
    {
       root=(struct node *)malloc(sizeof(struct node));
       for(int j=0;j<26;j++) root->next[j]=0;
       root->fail=0;
       root->count=0;
       scanf("%d",&n);
       getchar();
       for(i=0;i<n;i++)
       {
           gets(keyword);
           insert(keyword,root);
       }
       build_ac_automation(root);
       gets(str);
       ans=query(root);
       printf("%d\n",ans);
    }
    return 0;
}
