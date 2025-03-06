#include<stdio.h>
//#include<iostream>
//using namespace std;
int main()
{
	int a,b;
	double c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		if(b!=0)
		{
			c=(double)a/b;	
			if(c-(int)c<0.5)
				printf("%d\n",(int)c);
			else if(c-(int)c>=0.5)
				printf("%d\n",(int)c+1);
		}
	}
	return 0;
}
