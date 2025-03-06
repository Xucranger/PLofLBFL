#include <iostream>
using namespace std;
#define MAX 10000
int main()
{
   int a,b;
   double c,d;
   while(scanf("%d%d",&a,&b) != EOF)
   {
	   if(b == 0)
	   cout << "error" << endl;
      else
      {
	 	   c = double (a);
	 	   d = double (b);
	 	   if(int(c/d*10)%10 >= 5)
	        cout << a/b+1 << endl;
	        else 
	        cout << a/b << endl;
	   }
   }
	return 0;
} 
