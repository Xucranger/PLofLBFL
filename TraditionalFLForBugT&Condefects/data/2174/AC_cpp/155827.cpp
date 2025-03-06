#include<iostream> 
using namespace std;
int main()
{
	int a,b;
	double c;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			c=1.0*a/b;
			printf("%d\n",int(c+0.5));
		}
		else
			printf("error\n");
	}	
}
