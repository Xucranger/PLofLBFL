#include<iostream>
int main()
{
	using namespace std;
	int a,b,d;
	float c;
	for( ;cin>>a>>b; )
    {if(b==0)
		cout<<"error\n";
	else 
	{ d=a/b;
	  c=1.0*a/b;
	  if((c-d)>=0.5)
		  cout<<d+1<<endl;
	  else
		  cout<<d<<endl;
	}
	}
	return 0;
}
