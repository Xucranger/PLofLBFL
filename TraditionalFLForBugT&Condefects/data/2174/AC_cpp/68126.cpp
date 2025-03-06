#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float a,b,c;
	float m,d;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
		  c=a/b;//1.5
		  d = (int)c;//1
		  m = (float)(c-d);//0.5
		  if(m<(0.5))
		  {
  			c=c-m;
		  }
		  else
		  {
		  	c=c-m+1;
		  }
		  printf("%.0f\n",c);
		}
	}
	return 0;
}
