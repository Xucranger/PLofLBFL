#include<iostream>
using namespace std;
int a,b,c,d;
float x;
int main()
{
	while(cin>>a>>b){
		if(b==0) cout<<"error"<<endl;
		else{
			x=b/2.0;
			c=a/b;
			d=a-b*c;
			if(d*1.0>=x)
			cout<<c+1<<endl;
			else
			cout<<c<<endl;
		}
	}
	return 0;
 } 
