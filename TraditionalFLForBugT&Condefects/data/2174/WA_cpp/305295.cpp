#include<iostream>
using namespace std;
int main()
{
	int  a,b;
	while(cin>>a>>b)
	{
		double x,y;
		x=1.0*a;
		y=1.0*b;
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else if((a%b)>=b/2)
		cout<<a/b+1<<endl;
		else cout<<a/b<<endl;
	}
}
