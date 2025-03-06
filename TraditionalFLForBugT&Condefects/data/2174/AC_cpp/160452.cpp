#include<iostream>
using namespace std;
int main(void){
	float a,b;
	while(cin>>a>>b){
		if(b==0) cout<<"error"<<endl;
		else printf("%d\n",(int)(a/b+0.5));
	}
}
