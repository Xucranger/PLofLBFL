#include<iostream>
#define N 100
using namespace std;
int main(){
	int m,n=1,i=0,t=0,a[i],b[i];
	while(scanf("%d%d",&m,&n)!=EOF){
		if(n==0) b[i]=0;
		else{
			a[i]=m/n;b[i]=1;
		} 
		i++;t++;
	}
	for(i=0;i<t;i++){
		if(b[i]==0) cout<<"error"<<endl;
		else cout<<a[i]<<endl;
	}
	return 0;
}
