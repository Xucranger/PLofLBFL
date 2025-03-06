#include<iostream>
using namespace std;
int main(){
	float a,b;
	while(cin>>a>>b){
		int c=a,d=b;
		if(b==0) cout<<"error"<<endl;
		else {
			float t = a / b- c/d ;
			if(t >= 0.5 ) cout<<c/d+1<<endl;
			else cout<<c/d<<endl;
		}
	}
	return 0;
}
