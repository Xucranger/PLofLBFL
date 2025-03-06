#include<iostream>
using namespace std;
int main(){
	float a,b;
	int c;
	while(cin>>a>>b){
		if(b!=0){
			c=a/b+0.5;
			printf("%d\n",c);
		}
		else
			cout<<"error"<<endl;
	}
	return 0;
}
