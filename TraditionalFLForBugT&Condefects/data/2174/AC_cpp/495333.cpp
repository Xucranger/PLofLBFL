#include <iostream>
using namespace std;
int main(){
	double a,b,r;
	while(cin>>a>>b){
	if(b!=0){
		r=a/b;
		if(r-int(r)>=0.5)
			r++;
	cout<<int(r)<<endl;
	}
	else
		cout<<"error"<<endl;}
return 0;
}
