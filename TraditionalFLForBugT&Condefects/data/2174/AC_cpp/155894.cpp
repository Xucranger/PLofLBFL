#include<iostream>
using namespace std;
int main()
{
	int a,b,C,M,m;
	float c;
	while(cin>>a>>b)
	{
		if(b==0)  cout<<"error"<<endl;
		if(b!=0) 
		{
		c=(float)(a)/(float)(b);
		C=int(c*10);
		M=C%10;
		m=C/10;
		if(M>=5)
		printf("%d\n",m+1);
		if(M<5)
		printf("%d\n",m);
	}	} 
}
