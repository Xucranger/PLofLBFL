#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	double c;
	while(cin>>a>>b)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a*1.0/b;
			c=c+0.5;
			d=c;
			printf("%d\n",d);
		}
	}
	return 0;
}
