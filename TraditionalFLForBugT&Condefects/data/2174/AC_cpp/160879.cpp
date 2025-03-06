#include<iostream>
using namespace std;
int main()
{
	int a,b;
                float c;
	while(cin>>a>>b)
{
	if(b==0)
	cout<<"error"<<endl;
	if(b!=0)
	{
		c=a*1.0/b;
		c= (int)(c+ 0.5);
		cout<<c<<endl;
	}
}	
}
