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
			float c=a/b;
			c+=0.5;
			int ans=(int)c;
			cout<<ans<<endl;
		}
	}
}
