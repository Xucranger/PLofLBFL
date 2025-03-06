#include<iostream>
int main()
{
	using namespace std;
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
			cout<<int(1.0*a/b+0.5)<<endl;
	}
	return 0;
}
