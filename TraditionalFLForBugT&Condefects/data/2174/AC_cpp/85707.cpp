#include <iostream>
using namespace std;
 int main(){
 int a,b,n,i;
	 float m;
     while(cin>>a>>b){
		 if(b==0)
			 cout<<"error"<<endl;
		 else{
			 n=a/b;
			 i=a%b;
			 m=b/2.0;
			 if(i>=m)
				 n=n+1;
			 cout<<n<<endl;}
	 }
 }
