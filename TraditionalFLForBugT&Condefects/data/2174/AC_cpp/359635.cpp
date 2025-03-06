#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{if(b==0)cout<<"error"<<endl;
	 else
	 {if((10*a/b)%10>4)cout<<a/b+1<<endl;
	 	else cout<<a/b<<endl;
	  } 
	}
	return 0;
}
