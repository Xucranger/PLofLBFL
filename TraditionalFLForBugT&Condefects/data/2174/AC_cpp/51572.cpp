#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
		}
		else{
			if(a>0&&b>0||a<0&&b<0)
			{
				int t=(a%b)*2;
				if(t >=b&&a!=0&&a%b!=0){
				int c=(a/b)+1;
				cout<<c<<endl;
			}
			else
			cout<<a/b<<endl;
		}
		else if(a==0&&b!=0){
				cout<<"0"<<endl;
			}
		else if(a>0&&b<0||a<0&&b>0){
			int t=(a%b)*2;
			if(t<=-b&&a%b!=0){
				int d=a/b-1;
				cout<<d<<endl;
			}
			else
			cout<<a/b<<endl;
		}
		}
	}
	return 0;
} 
