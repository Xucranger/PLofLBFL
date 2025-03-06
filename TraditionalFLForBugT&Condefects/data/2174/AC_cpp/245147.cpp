#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin >> a >> b)
	{
	if(b==0)
		{
			printf("error\n");
		}
	else 
     	{
		    c=(float)a/(float)b+0.5;
	   	    printf("%d\n",c);
    	}
	}
	return 0;
}
