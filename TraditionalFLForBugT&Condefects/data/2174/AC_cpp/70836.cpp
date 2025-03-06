#include<iostream>
using namespace std;
int main()
	{
  	float a,b;
  	float e;
  	int k;
	  while(cin>>a)
	  {
  		cin>>b;
  		if(b==0)
  		{
		  cout<<"error"<<endl;
		  }else
  		 {  
  		    k=a/b;
		    e=a/b;
  		  if((e-k)>=0.5)
		  {
		  cout<<k+1<<endl;
		  }else
		  {
		  cout<<k<<endl;  
		  }
	  }
  	}	
  		return 0;
  	}	
