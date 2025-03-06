#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	double a,b,c;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
			continue;
		}
		cout<<(int)(a/b+0.5)<<endl;
	}
	return 0;
}
