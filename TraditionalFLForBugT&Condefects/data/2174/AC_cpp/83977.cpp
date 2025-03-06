#include<iostream>
using namespace std;
int main()
{
	int a,b,s1;
	float s; 
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			s=a/b;
			s1=a%b;
			if(s1>=0.5*b && s1<b)
			{
				s=s+1;
				cout<<s<<endl;
			}
			else
			{
				cout<<s<<endl;
			}
		}
		else
		{
			cout<<"error"<<endl;
		}
	}
} 
