#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int d;
   while(cin>>a>>b)
   {
    if(b!=0)
    {
        c=a%b;
        if(c>(b/2))
        {
           d=a/b+1;
        }
        else
        {
          d=a/b;
        }
        cout<<d;
    }
    else
    {
        cout<<"error";
    }
    break;
   }           
}      
