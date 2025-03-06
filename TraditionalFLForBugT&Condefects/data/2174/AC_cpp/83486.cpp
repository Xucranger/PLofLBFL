#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	int d;
	while(cin>>a>>b)
	{
	 if(b==0)
		cout<<"error"<<endl;
	 else
	 {
	 c=a/b+0.5;
	 d=c;
	 cout<<d<<endl;
	 }
	}
	return 0;
}
