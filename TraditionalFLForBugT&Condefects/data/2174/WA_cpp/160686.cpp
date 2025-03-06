#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==0)
		{	cout<<"error"<<endl;
		break;
		}
		float m=(float)a/(float)b;
		if(m-(a/b)>=0.5)
			cout<<a/b+1<<endl;
		if(m-(a/b)<=0.4)
			cout<<a/b<<endl;
	}
}
