#include<iostream>
using namespace std;
int main()
{
	int a,b,s;
	float c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			s=a/b;
			c=1.0*a/b;
			if((c-s)*10>=5)
				s++;
			cout<<s<<endl;
		}
	}
	return 0;
}
