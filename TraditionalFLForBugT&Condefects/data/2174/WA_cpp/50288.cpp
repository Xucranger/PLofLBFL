#include<iostream>
using namespace std;
int main()
{
    int a,b,s;
    while(cin>>a>>b)
    {
       if(b==0)
       {
         cout<<"error"<<endl;
         continue;
       }
       else
       {
         s=a/b;
       }
       cout<<s<<endl;
    }
    return 0;
}
