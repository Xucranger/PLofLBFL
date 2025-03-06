#include<iostream>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b)
{
	if(b==0)
	cout<<"ERROR"<<endl;
	else
	{
		int c;
		c= int(a/b+ 0.5);
		cout<<c<<endl;
	}
}	
}
