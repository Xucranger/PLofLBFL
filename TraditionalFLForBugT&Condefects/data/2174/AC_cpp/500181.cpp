#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc,char *argv[])
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
	else 
		printf("%d\n",(a+(b/2))/b);
	}
	return 0;
}
