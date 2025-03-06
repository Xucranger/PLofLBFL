#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(!b)
			cout<<"error"<<endl;
		else{
			if(a%b>=b/2+b%2)
				cout<<a/b+1<<endl;
			else
				cout<<a/b<<endl; 
		}
	} 
} 
