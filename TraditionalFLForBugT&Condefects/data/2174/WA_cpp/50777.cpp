#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float a , b;
	freopen("E.txt" , "r" , stdin);
	while(cin>>a>>b)
	{
		if(b == 0)
			cout<<"error"<<endl;
		else
		{
			float c = a / b ;
			int d = a / b ;
			//cout<<a<<"\t除以\t"<<b<<"\t四舍五入得:\t";
			if( c - d >= 0.5)
				cout<<d+1<<endl;
			else
				cout<<d<<endl;
		}
	}
}
