#include <iostream>
using namespace std;
int main(){
	int m,n;
	double k;
	while(cin>>m>>n){
		if(n==0) cout<<"error"<<endl;
		else{
			 k=(float)m/n;
			 m=k*10;
			 if(m%10>=5) {m=m/10+1;cout<<m<<endl;}
			 else  {m=m/10;cout<<m<<endl;}	
		}
	}
	return 0;
}
