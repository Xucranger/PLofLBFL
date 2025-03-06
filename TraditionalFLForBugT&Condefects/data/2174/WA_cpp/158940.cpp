#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,y;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			c=a/b;
			y=a%b;
			if(y>=5)
			{	d=c+1;
			cout<<d<<endl;}
			else
				cout<<c<<endl;
		}
	}
	return 0;
}
