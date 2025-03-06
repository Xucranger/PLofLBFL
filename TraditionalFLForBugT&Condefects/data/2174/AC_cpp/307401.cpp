#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int a,b,c;
	while(cin>>a>>b){
		if (b==0) cout<<"error"<<endl;
		else {
			cout<<(a+b/2)/b<<endl;
		}	
	}
	return 0;
}
