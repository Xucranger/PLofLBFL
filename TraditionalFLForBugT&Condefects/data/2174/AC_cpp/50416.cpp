#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	int zz;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error"<<endl;
		else {
			c=a/b;
		zz=a/b;
		if(c-zz>=0.5)
		{
			cout<<zz+1<<endl;
		}
		else cout<<zz<<endl;
		}
	}
	return 0;
}
