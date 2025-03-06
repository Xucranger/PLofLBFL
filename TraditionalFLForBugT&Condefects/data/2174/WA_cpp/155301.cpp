#include<iostream>
using namespace std;
int main()
{
	int a,b;float c;
	while(cin>>a>>b)
	{
		if(b==0) printf("error\n");
		if(b!=0)
		{
			 c=(float)(a)/(float)(b);
		printf("%.0f\n",c);}
	} 
}
