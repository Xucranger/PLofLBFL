#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b!=0)
			cout<<a/b<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
