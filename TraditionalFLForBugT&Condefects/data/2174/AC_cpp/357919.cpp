#include <iostream>
using namespace std;
int main()
{
	float a,b,c;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			if((a/b-int(a/b))>=.5)cout<<(int(a/b)+1)<<endl;
			else cout<<(int(a/b))<<endl;
		}
		else cout<<"error"<<endl;
	}
}
