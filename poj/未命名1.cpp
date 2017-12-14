#include<stdio.h>
int main()
{ 
  int i,count=0,a[11]={0,10,2,8,22,16,4,10,6,14,20} ;
  while(1)                                 
  { 
    for(i=1 ; i<=10 ; i++)
    a[i-1]=a[i-1]/2+a[i]/2 ;
    a[10]=a[10]/2+a[0] ;
    for(i=1 ; i<=10 ; i++)
      if(a[i]%2==1) a[i]++ ;                        
    for(i=1 ; i<10 ; i++)
      if(a[i]!=a[i+1]) i=12;                
    if(i==10) 
      break ;
    else 
    {
      a[0]=0 ;
      count++ ;
    } 
  } 
  printf("count=%d number=%d\n",count,a[1]) ;
}
