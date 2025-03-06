#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		float x=(float)a;
		float y=(float)b;
		if(!b)
		cout<<"error"<<endl;
		else if((x/y)>=(a/b+0.5))
		cout<<a/b+1<<endl;
		else
		cout<<a/b<<endl;
	}
	return 0;
}
