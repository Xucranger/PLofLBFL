#include<iostream> 
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			c=a/b;
			if(2*c<a)
			c+=1;
			printf("%d\n",c);
		}
		else
			printf("error\n");
	}	
}
