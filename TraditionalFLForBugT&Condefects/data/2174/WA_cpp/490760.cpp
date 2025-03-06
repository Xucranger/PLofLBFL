#include <string> 
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{   int p;
    int a,b;
	while(cin>>a>>b)
	{
	if(b==0)
		printf("error");
	else
	{p=round(1.0*a/b);
	printf("%d\n",p);}
	}
	return 0;
}
