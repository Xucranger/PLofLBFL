#include<iostream>
using namespace std;
int main()
{
	int a,b;
    while(cin>>a>>b)
    {
    	if(b==0) printf("ERROR\n");
    	else printf("%d\n",(a+(b/2))/b);
	}
	return 0;
}
