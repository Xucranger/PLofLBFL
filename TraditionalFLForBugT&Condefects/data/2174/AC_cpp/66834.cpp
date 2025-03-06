#include<iostream>
using namespace std;
int main(){
	int m,n,z,y;
	while(cin>>m>>n){
		if(n==0){
			cout<<"error"<<endl;
		}else{
			z=m/n;
			y=(m%n)*10/n;
			if(y>=5){
				z++;
			}
			cout<<z<<endl;
		}
	}
	return 0;
}
