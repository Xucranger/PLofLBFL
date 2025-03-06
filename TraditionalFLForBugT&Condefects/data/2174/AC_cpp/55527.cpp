#include<iostream>
using namespace std;
int main()
{
	float a,b;
	float c;
	int m;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error"<<endl;
		else
		{
			c=a/b;
			m=(int) c;
			if(c-m>=0.5)
			cout<<m+1<<endl;	
			else
			cout<<m<<endl;		 
		}
	}
	return 0;
} 
