#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			c=a/b;
			d=a%b;
			if(d*1.0/b>=0.5)
			    cout<<c+1<<endl;
			else
			{
				if(d*1.0/b<=-0.5)
			        cout<<c-1<<endl;
			    else
    			    cout<<c<<endl;
			}
		}
		else
		    cout<<"error"<<endl;
	}
	return 0;
}
