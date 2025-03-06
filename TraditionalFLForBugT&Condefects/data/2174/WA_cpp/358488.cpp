#include<iostream> 
using namespace std;
int main(){
	float a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
			return 0;
		} 
		if(a/b>=0){
			if(float(a/b-int(a/b))>=0.5){
				cout<<int(a/b)+1<<endl;
			}else{
				cout<<int(a/b)<<endl;
			}
		}else{
			if(float(a/b-int(a/b))<=-0.5){
				cout<<int(a/b)-1<<endl;
			}else{
				cout<<int(a/b)<<endl;
			}
		}
	}
	return 0;
}
