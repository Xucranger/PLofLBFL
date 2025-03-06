#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
            c=a/b;
	        d=(int)c;
			if(c>=(d+0.5))
			    cout<<ceil(c)<<endl;
			else
				cout<<floor(c)<<endl;
	}
	}
	return 0;
}
