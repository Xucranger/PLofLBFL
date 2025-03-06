#include<iostream> 
using namespace std;
int main(){
	float a,b;
	float c;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
			return 0;
		} 
		if(a/b-int(a/b)>=0.5){
			cout<<int(a/b)+1<<endl;
		}else{
			cout<<int(a/b)<<endl;
		}
	}
	return 0;
}
