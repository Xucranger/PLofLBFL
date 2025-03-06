#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		if(b==0)
		 {
		 	cout<<"error"<<endl;
		 	continue;
		 }
		c=a/b;
		d=a%b;
		if(d*2>=b)
		 c+=1;
		cout<<c<<endl;
	}
}
