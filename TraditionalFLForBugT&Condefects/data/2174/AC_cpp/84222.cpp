#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			if((a*10/b)%10<5)
			{
				cout<<a/b<<endl;
			}
			else
			{
				cout<<a/b+1<<endl;
			}
		}
	}
	return 0;
}
