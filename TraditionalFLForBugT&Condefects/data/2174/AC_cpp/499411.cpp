#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int c,d;
		if(b==0)
		cout<<"error"<<endl;
		else {
			c=a/b;
		d=a%b;
		if(2*d>=b)
		c++;
		cout<<c<<endl;
	}	
		}
} 
