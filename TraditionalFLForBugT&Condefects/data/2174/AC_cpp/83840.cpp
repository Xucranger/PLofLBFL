#include<iostream>
using namespace std;
int main()
{
    float a,b;
    while(cin>>a>>b)
    {
       int x;
       if(b!=0)
       {
           x=(a/b+0.5);
           cout<<x<<endl;
       }
       else
        cout<<"error"<<endl;
    }
}
