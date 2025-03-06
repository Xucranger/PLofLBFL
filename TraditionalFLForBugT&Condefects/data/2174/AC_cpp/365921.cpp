#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
	  if(b==0) cout<<"error"<<endl;
	  else {
	         int sum1=a/b,sum2=a%b;
			 if(sum2*2>b||(sum2*2==b))
	          cout<<sum1+1<<endl;
	         else cout<<sum1<<endl;
	}
   }
  return 0;	
 } 
