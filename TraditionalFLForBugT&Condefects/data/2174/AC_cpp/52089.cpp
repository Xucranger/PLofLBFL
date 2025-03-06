#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    float a,b,c;
	int d;
	while(cin>>a>>b)
	{
	   if(b==0)
		   cout<<"error"<<endl;
	   else
	   {
	       c=a/b;
		   d=c*2;
		   if(d>(int)c*2)
			   cout<<(int)c+1<<endl;
		   else
			   cout<<(int)c<<endl;
	   }
	}
    return 0;
}
