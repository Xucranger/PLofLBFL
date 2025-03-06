#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {
          c=(a*1.0/b)+0.5;
          cout<<c<<endl;
        }
     }
}
