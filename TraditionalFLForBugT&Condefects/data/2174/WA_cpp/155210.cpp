#include<iostream>
using namespace std;
int main()
{
	int a,b;
	double c;
	int C;
	while(cin>>a>>b)
	{
		if(b==0) printf("error\n");
		else
		c=double(a/b);
    	C=(int)(c+0.5)>(int)c?(int)c+1:(int)c;
		printf("%.0lf\n",double(C)); 
	} 
}
