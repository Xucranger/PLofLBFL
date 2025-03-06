#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	char c; 
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			int x=(a*10/b)%10;
			if(x<5)
			   d=a/b;
			else  d=a/b+1;   
			cout<<d<<endl;
		} 
	}
	return 0;
}
