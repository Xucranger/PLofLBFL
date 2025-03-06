#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			c=a/b;
			cout<<(int)(c+0.5)<<endl;
		}
	}
} 
