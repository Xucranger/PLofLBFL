#include<iostream>
using namespace std;
int main()
{
	float i,j;
	while(cin>>i>>j)
	{
		if(j==0)
			cout<<"error\n";
		else
			cout<<(int)(i/j+0.5)<<endl;
	}
}
