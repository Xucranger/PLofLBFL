#include <iostream>
using namespace std;
int main()
{
	double k,x,y;
	int a;
	while(cin>>k)
	{
		cin>>x;
		if(x==0)
			cout<<"error"<<endl;
		else
		{
			y=k/x;
			a=k/x;
			if(y-a>=0.5)
				y=a+1;
			else
				y=a;
			cout<<y<<endl;
		}
	}
	return 0;
}
