#include<iostream>
using namespace std;
int main(){
	int c;
	float a,b;
	while(cin>>a>>b){
		if(b!=0)
		{
			c=a/b+0.5;
			cout<<c<<endl;
		}
		else 
			cout<<"error"<<endl;
	}
	return 0;
}
