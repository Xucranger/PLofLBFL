#include<iostream>
using namespace std;
int Test(int a,int b) {
  int c, d;
   c = a*10/b;
   d = c%10;
   if(d>4)
      return 1;
    else
      return 0;
}
int main() {
	int a, b;
	while(cin>>a>>b) {
	   if(b==0)
	    cout<<"error"<<endl;
	   else {
	   	 if(Test(a,b))
	   	   cout<<(a/b)+1<<endl;
	   	 else
	   	   cout<<a/b<<endl;
	   }   
	}
}
