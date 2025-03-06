#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float d;
	while(cin>>a>>b)
	{
	if(b==0)
		cout<<"error"<<endl;
	else
	{
		d=(float)a/(float)b;
		c=(int )(d+0.5);
		cout<<c<<endl;
	}
	}
	return 0; 
 } 
