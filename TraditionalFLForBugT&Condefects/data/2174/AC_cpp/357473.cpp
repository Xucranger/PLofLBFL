#include<iostream>
using namespace std;
int main()
{
	int c;
	float a,b,d;
	while(cin>>a>>b)
	{
	if(b==0)
	printf("error\n");
    else
	{
		d=a/b;
	    c=a/b;
	    if(d-c>=0.5)
	    {
	    	c=c+1;
		}
        printf("%d\n",c);
    }
	}
}
