#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(n==0) cout<<"error"<<endl;
		else{
			if((m%n)*2>=n)
				cout<<m/n+1<<endl;
			else cout<<m/n<<endl;
		}
	}
	return 0;
}
