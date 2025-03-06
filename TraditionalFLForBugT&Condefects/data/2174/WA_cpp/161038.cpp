#include<iostream>
using namespace std;
int main()
{   
	 int a,b;
	 int j;
	 while(cin>>a>>b)
	 {    if(b==0)
	        cout<<"error"<<endl;
	      else	{   j=a%b;
		            if(j<(a/2.0))
			          cout<<a/b<<endl;
		            else 
						cout<<(a/b+1)<<endl;}
     }
	 return 0;
}
