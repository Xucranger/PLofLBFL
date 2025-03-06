#include<iostream>
#define N 100
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		if(n==0) cout<<"error"<<endl;
		else cout<<m/n<<endl;
	}
	return 0;
}
