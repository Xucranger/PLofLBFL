#include<iostream>
using namespace std;
int main(void){
	int a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
			continue;
		}else cout<<a/b<<endl;
	}
	return 0;
}
