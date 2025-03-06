#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error"<<endl;
		else 
		{
			r=(int)((float)a/b+0.5);
			cout<<r<<endl;
		}
	}
}
