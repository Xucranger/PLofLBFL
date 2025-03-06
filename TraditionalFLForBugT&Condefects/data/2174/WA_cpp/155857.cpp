#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)  cout<<"error"<<endl;
		if(b!=0)  printf("%.0f",(float)(a)/(float)(b));
	}
}
