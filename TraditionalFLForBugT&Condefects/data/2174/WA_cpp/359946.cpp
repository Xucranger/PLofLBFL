#include<iostream>
using namespace std;
int main()
{
  int a,b,m,n;
  float sum;
  while(cin>>a>>b)
  {
  	if(b==0) cout<<"error"<<endl;
  	else if(a<b) cout<<0<<endl;
  	else
  	{
  		sum=a*(1.0)/b; m=a/b;
  		if(sum-m>=0.5)
  		m+=1;
  		else sum=m;
  		cout<<m<<endl;
	  }
  }
  return 0;
}
