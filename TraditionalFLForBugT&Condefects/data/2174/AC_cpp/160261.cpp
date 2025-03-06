#include<iostream>
using namespace std;
class division
{
	private:
		int a,b,m;
	public:
		void output();
 }; 
 void division::output()
 {
 	while(cin>>a>>b)
 	{
 		if(b==0)
 		  cout<<"error"<<endl;
 		else  
		{
		   m=int(float(a)/b+0.5);
		   cout<<m<<endl;
		}	
	 }
 }
 int main()
 {
 	division m;
 	m.output();
 }
