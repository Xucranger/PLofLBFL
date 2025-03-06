#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
		}
		else{
			if(a%b >= b/2){
				int c=(a/b)+1;
				cout<<c<<endl;
			}
			else
			cout<<a/b<<endl;
		}
	}
	return 0;
} 
