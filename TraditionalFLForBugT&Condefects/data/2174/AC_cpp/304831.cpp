#include<iostream>
using namespace std;
int main()
{
	int d;
	float c,a,b;
	while(cin>>a>>b)
	{
		if(b==0) cout<<"error"<<endl;
		else{
			c=a/b;
			c+=0.5;
			d=c;
			cout<<d<<endl;
		}
	}
	return 0;
}
