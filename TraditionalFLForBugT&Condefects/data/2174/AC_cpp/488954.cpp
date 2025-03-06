#include<stdio.h>
#include<iostream>
using namespace std;
typedef int gu;
int main()
{
	gu a,b;
	for(int i=0;i<1;i++)
		for(int j=0;j<1;j++)
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
			for(int i=0;i<1;i++)
				for(int j=0;j<1;j++)
					cout<<"error"<<endl;
		else
		{
			int m=(double)a/b+0.5;
			for(int i=0;i<1;i++)
				for(int j=0;j<1;j++)
					cout<<m<<endl;
		}
	}
	return 0;
}
