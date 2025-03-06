#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int x=0;
	int i=1;
	while(cin >> a >> b)
	{
	    if(b==0)
	    {
	        printf("error");
	    }
	    else
	    {
	    	x=a/b;
	        printf("%d\n",x);
	    }
	}
	return 0;
}
