#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error"<<endl;
		else 
		{
			cout<<(int)(a/b+0.5)<<endl;
		}
	}
}
