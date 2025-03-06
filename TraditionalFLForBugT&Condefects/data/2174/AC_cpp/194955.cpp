#include <iostream>
using namespace std;
int main(void)
{
	double a,b;
	while(cin>>a>>b)
	{
		if(b == 0)
		{
			cout<<"error"<<endl;
			continue;
		}
		cout<<(int)(a/b+0.5)<<endl;
	}
	return 0;
}
