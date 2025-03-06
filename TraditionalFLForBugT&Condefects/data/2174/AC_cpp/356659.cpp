#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==0)  cout<<"error"<<endl;
		else{
			float c=(float)a/b;
			int d=(float)a/b;
			if(c-d>=0.5)
			   d++;
			cout<<d<<endl;
		}
	}
	return 0;
}
