#include<iostream>
#include<cmath> 
#include<cstring>
#define M 10000
using namespace std; 
int main(){ 
	int a,b,c,x,s,y;	
	while(cin>>a>>b){
		if(b==0) cout<<"error"<<endl;
		else{
			c=a/b;
			x=a%b;
			y=x*10;
			s=y/b;
			if(s>=5){
				cout<<c+1<<endl;
			}
			else cout<<c<<endl;
		}
	}
//	system("pause"); 
    return 0; 
} 
