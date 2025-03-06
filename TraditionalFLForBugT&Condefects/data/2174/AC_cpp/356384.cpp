#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
			cout<<int(a/float(b)+0.5)<<endl;
	}
	return 0;
}
