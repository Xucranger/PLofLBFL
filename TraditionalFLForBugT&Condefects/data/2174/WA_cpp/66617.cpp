#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)	
	{
	if (b==0)
	cout<<"error"<<endl;
	else
	cout<<a/b<<endl;
}
}
