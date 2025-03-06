#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error"<<endl;
		else
		{
			float c=1.0*a/b;
			//1cout<<c<<endl;
			c+=0.5;
			int ans=c;
			cout<<ans<<endl;
		}
	}
}
