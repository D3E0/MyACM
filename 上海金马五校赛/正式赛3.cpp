#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
int word[7];  //word[0] is i;word[1] is l;word[2] is o;word[3] is v;word[4] is e; word[5] is c;word[6] is s;
int cmp(const void*a,const void*b)
{
     return *(int*)a-*(int*)b;
}
char str[100055];
int main()
{	
    memset(word,0,sizeof(word)); 
	while(~scanf("%s",str))
	{
		
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='i'||str[i]=='I')
			word[0]++;
			else if(str[i]=='l'||str[i]=='L')
			word[1]++;
			else if(str[i]=='o'||str[i]=='O')
			word[2]++;
			else if(str[i]=='v'||str[i]=='V')
			word[3]++;
			else if(str[i]=='e'||str[i]=='E')
			word[4]++;
			else if(str[i]=='c'||str[i]=='C')
			word[5]++;
			else if(str[i]=='s'||str[i]=='S')
			word[6]++;
		}
		word[4]/=2;
		qsort(word,7,sizeof(int),cmp);
		printf("%d\n",word[0]);
		memset(word,0,sizeof(word));
	}
	return 0;
}
