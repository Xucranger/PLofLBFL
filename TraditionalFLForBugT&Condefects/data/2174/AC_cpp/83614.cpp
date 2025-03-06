#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float m;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			m=(float)a/b;
			a=a/b;
			if(m-a>=0.5)
			{
				cout<<a+1<<endl;
			}
			else
			{
				cout<<a<<endl;
			}
		}
	}
    return 0;
}
