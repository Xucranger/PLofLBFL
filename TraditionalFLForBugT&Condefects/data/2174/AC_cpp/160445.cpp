#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		float res;
		int result;
		if(b!=0){
		   res=a*1.0/b;
		   result=((res-(int)res)>=0.5)?(int)res+1:(int)res;
		   cout<<result<<endl;
	    }
		else cout<<"error"<<endl;
	}
	return 0;
}
