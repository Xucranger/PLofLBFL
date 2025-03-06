#include<iostream>
using namespace std;
int main()
{
	int a,b,s;
	while(cin>>a>>b)
	   if(b==0)
	   cout<<"error"<<endl;
	   else {s=float(a)/float(b)+0.5;
	         cout<<""<<s<<endl;
	   }
}
