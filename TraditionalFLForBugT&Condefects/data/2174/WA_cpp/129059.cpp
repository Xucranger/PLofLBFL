#include<iostream>
using namespace std;
int main()
{
	 int a,b;
	 while(cin>>a>>b)
	 {
	 	if(b==0)
	 		cout<<"error"<<endl;
	 	else
	 	{
	 		int s=a/b+0.5;
	 		cout<<s<<endl;
	 	} 
	 }
	 return 0;
}
