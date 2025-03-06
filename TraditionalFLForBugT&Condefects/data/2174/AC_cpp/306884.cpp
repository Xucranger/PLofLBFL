#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	int m;
	while(cin>>a>>b){
		m=a/b;
		if(b==0)
		cout<<"error"<<endl;
		else{
			if((a/b-m)>=0.5)
				cout<<m+1<<endl;
			else 
				cout<<m<<endl;
		}
	}
}
