#include<iostream>
using namespace std;
int main()
{
	int d;
	double a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
				c=a/b;
				d=a/b;
				if(c-d<0.5)
					cout<<d<<endl;
				else
					cout<<d+1<<endl;
		}
	}
	//system("pause");
	return 0;
}
