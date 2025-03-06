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
		float c;
		c=a*1.0/b;
		c= (int)(c+ 0.5);
		cout<<c<<endl;
	}
}	
}
