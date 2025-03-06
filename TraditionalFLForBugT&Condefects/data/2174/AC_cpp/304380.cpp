//============================================================================
// Name        : ACM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main() {
	float in ,a;
	while(cin>>in){
		cin>>a;
		if(a!=0){
			cout<<(int)(in/a+0.5)<<endl;
		}else
			cout<<"error"<<endl;
	}
	return 0;
}
