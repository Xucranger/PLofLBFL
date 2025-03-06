#include <iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	int i,end=0;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
	    else 
	       {c=a*1.0/b*1.0;
	       i=a/b;
	       end=(i+1<=c+0.5)?i+1:i;
	      printf("%d\n",end);
		   }
	}
	return 0;
}
