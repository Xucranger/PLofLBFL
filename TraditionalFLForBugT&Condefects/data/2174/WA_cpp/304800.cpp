#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int c;
	float d;
	while(cin>>a>>b)
	{
		if(b==0) cout<<"error"<<endl;
		else{
			c=a/b;
			d=a/b;
			if(c*2+1>=d*2)
				cout<<c+1<<endl;
			else cout<<c<<endl;
		}
	}
	return 0;
}
