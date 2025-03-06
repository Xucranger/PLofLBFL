#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(m==0)cout<<"error"<<endl;
		else cout<<n/m<<endl;
	}
	return 0;
}
