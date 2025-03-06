#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
    while(cin>>a>>b)
	{
		if(!b)
			cout<<"error"<<endl;
		else
			c=float(float(a)/float(b));
            cout<<int(c+0.5)<<endl;
    }
	return 0;
}
