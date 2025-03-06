#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b){
		if(b==0) cout<<"error"<<endl;
		else {
			float c=(a*1.0)/(b*1.0);
			c=int(c+0.5);
			cout<<c<<endl;
		}
	}
	return 0;
}
