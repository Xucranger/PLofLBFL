#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
		c=a/b;
		int d=a/b;
		if(c-d>=0.5)
			cout<<d+1<<endl;
		else
			cout<<d<<endl;
		}
	}
    return 0;
}
