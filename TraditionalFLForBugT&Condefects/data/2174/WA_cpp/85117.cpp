#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{double account=a/b;
		int x;
		x=int(account*10);
		if(x<5)
		a=int(account);
		else
		a=int(account)+1;
		cout<<a<<endl;
            }
	}
	return 0;
}
