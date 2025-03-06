#include<iostream>
#include<cmath>
using namespace std;
int rounds(double number){
	return (number>0.0)?floor(number+0.5):ceil(number-0.5);
}
int main(){
	double a=0,b=0,res=0;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
		}else{
			cout<<rounds(a/b)<<endl;
		}
	}
	return 0;
}
