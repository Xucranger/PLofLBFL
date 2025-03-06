#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b,z,c;
	float d;
	while(cin>>a>>b)
	{
		if(b==0) cout<<"error"<<endl;
		else
		{
			z=a/b;
			c=a%b;
			d=c*1.0/b;
			if(d>=0.5) z=z+1;
			cout<<z<<endl;
		} 
	}
	return 0;
}
