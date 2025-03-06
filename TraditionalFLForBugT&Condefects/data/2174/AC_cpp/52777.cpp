#include<iostream>
using namespace std;
int main(){
	int a,b,m;
	double n;
	while(cin>>a>>b){
		if(b==0)
			cout<<"error"<<endl;
		else{
			n=a/b;
			m=int(a*10/b);
			//cout<<m<<endl;
			if(m%10>4){
				cout<<m/10+1<<endl;
			}
			else{
				cout<<m/10<<endl;
			}
		}
	}
	return 0;
}
