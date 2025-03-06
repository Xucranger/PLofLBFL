#include<iostream>
using namespace std;
int main(){
	float a,b,t;
	int c,d;
	while(cin>>a>>b){
		if(b==0) cout<<"error"<<endl;
		else {
			t=(a)/b;
			 c=a;
			d=b;
			if((t-a/b)>0.5) cout<<c/d+1<<endl;
			else cout<<c/d<<endl;
		}
	}
	return 0;
}
