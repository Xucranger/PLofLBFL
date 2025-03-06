#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,m;
	while(cin>>a>>b)
{
	if(b==0)
	cout<<"error"<<endl;
	else
	{
	d=a*10/b;
	c=a/b;
	m=d-c*10;
	if(m>5||m==5)
	cout<<a/b+1<<endl;
	else 
	cout<<a/b<<endl;
}
}
    return 0;
}
