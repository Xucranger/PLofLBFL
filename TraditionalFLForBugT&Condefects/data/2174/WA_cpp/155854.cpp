#include<iostream>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b)
	{
		if(b==0)  cout<<"error"<<endl;
		if(b!=0)  printf("%.0f",a/b);
	}
}
