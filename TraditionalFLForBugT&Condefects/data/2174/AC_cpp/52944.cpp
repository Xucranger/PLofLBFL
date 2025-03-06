#include<iostream>
using namespace std;
int main()
{
	double a,b;
	while(cin >>a>>b)
	{
		if(b == 0)
		{
			cout <<"error"<<endl;
		}
		else
		{
			int p = 0;
			if(a / b - int(a / b) >= 0.5)
			{
				p = 1;
			}
			cout <<int(a / b) + p<<endl;
		}
	}
	return 0;
}
