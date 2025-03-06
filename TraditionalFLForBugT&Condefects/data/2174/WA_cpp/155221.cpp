#include<iostream>
using namespace std;
int main()
{
	int a,b;
	double c;
	int C;
	while(cin>>a>>b)
	{
		if(b==0) printf("error\n");
		else
		c=double(a/b)+0.5;
		printf("%.0lf\n",c); 
	} 
}
