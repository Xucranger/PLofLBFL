#include<stdio.h>
#include <iostream>
using namespace std;
int main() 
{
	int a,b,i=0,n=0;
	while(cin>>a>>b)
	{
		if(b==0)
			printf("error\n");
		else
			{
				n=0;
				i=a%b;
				n=(a-i)/b;
				if(2*i>=b)
					n=n+1;
				else
					n=n;
				printf("%d\n",n);
			}
	}
	return 0;
}
