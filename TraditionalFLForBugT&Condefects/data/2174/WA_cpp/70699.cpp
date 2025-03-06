#include<iostream>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl; 
		}
		else {
			printf("%.f\n",(a/b+0.5));
		}
	}
	return 0;
}
