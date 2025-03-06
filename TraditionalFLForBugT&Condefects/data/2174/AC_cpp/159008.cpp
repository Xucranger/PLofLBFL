#include<iostream>
using namespace std;
int main()
{
    float a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		if(b!=0)
		{
			int c=0;
			c=(int)(a/b+0.5);
		cout<<c<<endl;
		}
	}
	return 0;
}
