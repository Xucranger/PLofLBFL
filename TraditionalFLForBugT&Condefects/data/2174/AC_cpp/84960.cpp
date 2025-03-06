#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{   
int a,b;
while(cin >> a >> b)
{
	float d;
	int c,c1,c2;
	if(b==0)
	{
	cout<<"error"<<endl;}
	else
	{
	c=a%b;c1=a/b;c2=a/b+1;
	d=c*1.0/b;
	if(d<0.5)
	{
	cout<<c1<<endl;}
	if(d>=0.5)
	{
	cout<<c2<<endl;}
}
}
}
