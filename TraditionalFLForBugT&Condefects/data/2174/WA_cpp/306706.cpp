#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std; 
int main()
{
	float a,b,c,e;
    while(cin>>a>>b)
	{
		//scanf("%d %d",&a,&b);
		if(b!=0)
		{
			c=a/b;
			int d=a/b;
			e=c-d;
			if(e>=0.5)
			d++;
			printf("%d\n",d);
		}
		else
		printf("error") ;
	}
	return 0;
}
