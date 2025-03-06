#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int a,b;
	int c;
    while(cin >>a>>b)
	{
		if(b==0)
		{
			cout <<"error"<<endl;
			continue;		   
		}
		c=a/b;
		if((a*1.0/b-c)>=0.5)
		{
			cout <<c+1<<endl;
		}
		else
		{
			cout <<c<<endl;
		}
	}
}
