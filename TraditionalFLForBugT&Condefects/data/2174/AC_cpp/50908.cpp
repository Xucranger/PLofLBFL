#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	float t;
	while(cin>>a>>b){
		if(b == 0){
			cout<<"error"<<endl;
		}
		else {
			 c = a/b;
			 t = 1.*a/b;
			 if(t-c>=0.5){
			 	c++;
			 }
			 cout<<c<<endl;
		}
	}
	return 0;
}
