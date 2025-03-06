#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	while(cin>>a>>b){
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			c=(float)a/b;
			if(c-a/b>=0.5)
				cout<<a/b+1<<endl;
			else
				cout<<a/b<<endl;
		}
	}
	return 0;
}
