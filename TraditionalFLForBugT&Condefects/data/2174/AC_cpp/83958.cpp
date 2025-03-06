#include <iostream>
using namespace std;
int main()
{int a,c;
 float b;
 while(scanf("%d %f",&a,&b)!=EOF)
 { if(b==0) cout<<"error"<<endl;
  else
  {
   c=int(a/b+0.5);
   cout<<c<<endl;}
 } 
} 
