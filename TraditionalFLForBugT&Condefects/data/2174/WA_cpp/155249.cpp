#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int C;
	while(cin>>a>>b)
	{
		if(b==0) printf("error\n");
		if(b!=0)
		{
		printf("%.0f\n",float(a/b)+0.5)	;}
	} 
}
