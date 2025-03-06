#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int a,b;
	while(cin>>a>>b) {
		if(b==0)
			cout<<"error";
		else {
			float c=(float)a/b+0.5;
			cout<<(int)c<<endl;
		}
	}
	return 0; 
}
