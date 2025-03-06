#include<iostream>
//#include<stdio.h>
using namespace std;
int main()
{
	int i,count=0;
	float a,b;
	int n[1000];
	while(cin>>a>>b&&a!=EOF)
	{
		if(b==0) 
		{
			n[count]=-1;
			count++;
		}
		else
		{
			n[count]=(int)a/b+0.5;
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		if(n[i]==-1) cout<<"error"<<endl;
		else cout<<n[i]<<endl;
	}
	return 0;
 } 
