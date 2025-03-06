#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(n==0) cout<<"error"<<endl;
		else cout<<m/n<<endl;
	}
	return 0;
}
