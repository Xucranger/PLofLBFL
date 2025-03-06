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
           x=int(a+0.5/b);
           cout<<x<<endl;
       }
       else
        cout<<"error"<<endl;
    }
}
