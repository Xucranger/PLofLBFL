#include<iostream>
using namespace std;
int main()
{
	float c,a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
			continue;
		}
		c=(int)(a/b*1.0+0.5);
		cout<<c<<endl;
	}
return 0;
 } 
