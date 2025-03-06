#include <iostream>
using namespace std;
int main()
{  int a,b;
int l=0;
   while(cin>>a>>b)
   {
    if(b!=0)
   {
    cout << a/b << endl;
    l=1;break;
   }
   }
   if(l==0)
    cout<<"error"<<endl;
    return 0;
}
