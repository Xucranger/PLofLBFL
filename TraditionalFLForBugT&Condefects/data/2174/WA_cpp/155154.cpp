#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0) printf("error");
		else printf("%.0f",a/b); 
	} 
}
