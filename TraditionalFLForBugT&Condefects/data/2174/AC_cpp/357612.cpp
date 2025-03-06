#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b)
	{
		 if(b==0) cout<<"error"<<endl;
		 else 
		 {
		 	float c=a/b;
		 	if(c-(int(c))>=0.5) cout<<((int(c))+1)<<endl;
		 	else  cout<<(int(c))<<endl;
		  } 
	}
 } 
