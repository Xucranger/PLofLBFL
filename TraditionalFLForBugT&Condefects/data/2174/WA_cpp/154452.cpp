#include <iostream>
using namespace std;
int main()
{
	int a,b;
	double remainder,bs;
	while (cin>>a>>b)
	{
		if (b==0)
			cout<<"error";
		else
		{
			remainder = a%b;
			bs=b;
			if (remainder/b >= 0.5)
				cout<<a/b+1<<endl;
			else
				cout<<a/b<<endl;
		}
	}
	return 0;
}
