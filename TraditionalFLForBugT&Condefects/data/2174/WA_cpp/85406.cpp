#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
    int a,b,c;
    int d;
    cin>>a; cin>>b;
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
