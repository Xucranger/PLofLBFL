#include <iostream>
#include <string.h>
using namespace std;
int  main()
{
	int x,y,result1;
	float result;
	while(cin>>x>>y)
	{
		if(y==0)
		{
			cout<<"error"<<endl;
		}else
		{
			result=(x*1.0)/(y*1.0);
			result1=(int)(result+0.5)>(int)result?(int)result+1:(int)result;
			cout<<result1<<endl;
		}
	}
	return 0;
}
