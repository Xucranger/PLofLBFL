#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main ()
{
	float a,b;
	float c,d,t;
	t=1.00/2;
	int m;
	while(cin>>a>>b)	
	 {
	if(b!=0)
	{
	c=a/b;
	m=a/b;
	if(c-m>=t)
	m++;
printf("%d\n",m);
    }
else
printf("error");
    }
}
