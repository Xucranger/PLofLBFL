#include<iostream>
using namespace std;
int main(void)
{
	float a,b;
	int c;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		 } 
		else
		{
			c=a/b+0.5;
			cout<<c<<endl;
		 } 
	}
	return 0;
}
