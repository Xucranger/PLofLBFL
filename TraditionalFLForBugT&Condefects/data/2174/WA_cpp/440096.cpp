#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b){
		if(b==0)
		cout<<"error";
		else
		{
		c=a/b;
		d=a%b;
		if(d>=5)
		c++;
		cout<<c<<endl;
	}
	}
}
