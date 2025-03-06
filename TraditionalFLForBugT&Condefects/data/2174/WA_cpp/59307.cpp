#include<iostream>
using namespace std;
int main()
{
	int a,b,y,c;
	cin>>a>>b;
    if(b==0)
			cout<<"error"<<endl;
	else
		{
		c=a/b;
		y=a%b;
		if(y>4)
			cout<<c+1<<endl;
		else
			cout<<c<<endl;}
		return 0;
	}
