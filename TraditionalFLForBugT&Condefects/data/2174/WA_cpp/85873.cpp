#include <iostream>
using namespace std;
int main()
{
int a,b;
while(cin >> a >> b)
{   int n;
    if(b==0)
    cout<<"error";
    else if(b!=0)
    n=a/b;
    cout<<n;
          }
}
