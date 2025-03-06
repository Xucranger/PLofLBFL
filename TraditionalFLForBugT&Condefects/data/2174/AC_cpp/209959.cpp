#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(m==0)cout<<"error"<<endl;
		else cout<<(int)(n/(float)m+0.5)<<endl;
	}
	return 0;
}
