#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin >>a>>b)
	{
		if(b!=0)
		{
			c=a%b;
			if(c>=0.5*b)
			cout <<a/b+1<<endl;
			else
			cout <<a/b<<endl;
		}
		else
		cout <<"error"<<endl;
	}
	return 0;
}
