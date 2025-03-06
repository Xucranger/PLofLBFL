#include <iostream>
#define XX while
using namespace std;
int main()
{
	int a,b;
	XX(cin>>a>>b)
	{
		if(b)
		{
			cout<<int((a*1.0/b)+0.5)<<endl;
		}
		else
		{
			cout<<"error"<<endl;
		}
	}
}
