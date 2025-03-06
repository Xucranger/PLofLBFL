#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b){
		if(a==0)	cout<<a<<endl;
		else if(b==0)	cout<<"error"<<endl;
		else if(a==b)	cout<<"1"<<endl;
		else{
			a*=2;
			b*=2;
			if(a<b){
				if(a<(b/2))	cout<<"0"<<endl;
				else	cout<<"1"<<endl;
			}
			else{
				if((a%b)<(b/2))	cout<<a/b<<endl;
				else	cout<<a/b+1<<endl;
			}
		}	
	}
	return 0;
}
