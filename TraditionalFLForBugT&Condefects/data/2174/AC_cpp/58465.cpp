#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			c=a/b;
			d=a%b;
			if(d*10>=b*5)
				cout<<c+1<<endl;
			else
				cout<<c<<endl;
		}
	}
	return 0;
}
