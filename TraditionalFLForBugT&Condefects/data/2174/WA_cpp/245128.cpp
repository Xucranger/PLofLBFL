#include <iostream> 
using namespace std;
int main()
{
	 int a,b,s;
	 while(cin>>a>>b)
	  s=(float)a/(float)b+0.5;
	 if(b==0)
	 printf("error");
	 else
	 printf("%d",s);
}
