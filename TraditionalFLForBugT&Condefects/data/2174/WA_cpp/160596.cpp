#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
{
	if(b==0)
	cout<<"ERROR"<<endl;
	if(b!=0)
	{
		int c;
		c=a/b;
		cout<<c<<endl;
	}
}	
}
