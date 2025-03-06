#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	while(cin >>a>>b)
	{
		if(b!=0)
		{
			c=a%b;
			if(c>=0.5*b)
			{
			  d=a/b+1;
			cout<<d<<endl;
			}
			else
			{
			   e=a/b;
			cout<<e<<endl; 
                                                }
		}
		else
		cout<<"error"<<endl;
	}
               return 0;
}
