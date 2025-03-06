#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b;
	int c;
      while(cin>>a>>b)
    {
      if(b==0)
      cout<<"error"<<endl;
      else
      {
	  c=round(a/b);
      cout<<c<<endl;
      }
     }
return 0;
}
