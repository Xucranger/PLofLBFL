#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	while(cin>>a>>b){
		if(b!=0){
			c=a/b;
			if(c>=1/2)
				cout<<c+1<<endl;
			else
				cout<<c<<endl;
		}
		else
			cout<<"error"<<endl;
	}
	return 0;
}
