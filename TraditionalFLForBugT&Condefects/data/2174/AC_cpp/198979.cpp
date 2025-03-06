#include<iostream> 
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			c=a*10/b;
			if(c%10>=5)
			{
				c=c/10+1;
				cout<<("%d",c)<<endl;
			}
			else
			{
				c=c/10;
				cout<<("%d",c)<<endl;
			}
		 } 
	}
	return 0;
}
