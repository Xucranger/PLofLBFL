#include <iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		if(n==0) cout<<"error"<<endl;
		else{
			int k=m/n;
			cout<<k<<endl;
		}
	}
	return 0;
}
