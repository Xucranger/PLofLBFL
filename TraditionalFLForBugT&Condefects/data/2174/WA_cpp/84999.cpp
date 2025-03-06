#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	int c;
	while(cin>>a>>b>>c)
	{
		cout<<setiosflags(ios::fixed)<<setprecision(c)<<a/b<<endl;
	}
}
