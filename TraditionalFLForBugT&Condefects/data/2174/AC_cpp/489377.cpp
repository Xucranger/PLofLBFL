#include<iostream>
using namespace std;
int c(double x,double y)
{   double r;int u;
    int n,v;
if(y==0)
{cout<<"error"<<endl;
	return 0;
}
else{
	r=x/y;
	u=x/y;
	r=r-u;
	n=x;v=y;
	if(r>=0.5)
	{
		cout<< n/v+1<<endl;
	}
	else cout<< n/v<<endl;
}
return 0;
}
int main()
{
	double s,d;
	while(cin>>s>>d){
		c(s,d);
	}
}
