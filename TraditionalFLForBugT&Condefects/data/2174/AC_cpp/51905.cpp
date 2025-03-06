#include<iostream>
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
			float c=a,d=b;
			if(c/d-(float)(a/b)>=0.5)
				cout<<a/b+1<<endl;
			else
				cout<<a/b<<endl;
		} 
	}
}
