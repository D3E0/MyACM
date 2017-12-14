#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
	cout<<"Enter the delay time,in seconds:";
	float secs=30*60*60;
	clock_t delay=secs*CLOCKS_PER_SEC;
	clock_t start=clock();
	while(1)
	{
	  if(clock()-start>=delay)
	  {
	  	MessageBox(NULL, "Please rest your eyes!!!!", "NOTICE",  MB_OK);
	    start =clock(); 
	  }  
	} 
	return 0;
}
