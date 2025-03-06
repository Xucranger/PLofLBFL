#include<iostream> 
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			printf("%d\n",a/b);
		}
		else
			printf("error\n");
	}	
}
