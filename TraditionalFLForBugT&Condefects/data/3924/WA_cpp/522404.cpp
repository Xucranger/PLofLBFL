#include<iostream>
using namespace std;
int main(){
	int a,aa,b,bb;
	while(cin>>a>>aa>>b>>bb){
		if(a==aa&&b==bb){
			if(a>b){
				cout<<"A"<<endl;
			}
			else if(b>a){
				cout<<"B"<<endl;
			}
			else{
				cout<<"N"<<endl;
			}
		}
		else if(a==aa&&b!=bb){
			cout<<"A"<<endl;
		}
		else if(a!=aa&&b==bb){
			cout<<"B"<<endl;
		}
		else if((a+aa)%10>(b+bb)%10){
				cout<<"A"<<endl;
		}
		else if((a+aa)%10<(b+bb)%10){
				cout<<"B"<<endl;
		}
		else cout<<"N"<<endl;
	}
	return 0;	
}
