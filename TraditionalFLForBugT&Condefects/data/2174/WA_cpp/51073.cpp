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
			c=a/b;
			if(c<5)
				cout<<0<<endl;
			else
				cout<<c<<endl;
		}
	}
	//system("pause");
	return 0;
}
