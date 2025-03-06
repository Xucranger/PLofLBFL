#include <string> 
#include <iostream>
using namespace std;
int main()
{   int p;
    int a,b;
	while(cin>>a>>b)
	{
	if(b==0)
		printf("error");
	else
	{	p=a*b;
	if(p>0)
		p=int(1.0000*a/b+0.5);
	else
        p=int(1.0000*a/b-0.5);
	printf("%d\n",p);}
	}
}
