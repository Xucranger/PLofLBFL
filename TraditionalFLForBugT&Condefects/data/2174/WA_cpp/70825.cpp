#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while (cin>>a>>b)
    {
          if(b==0)
          cout<<"error"<<endl;
          else
          {
              if(a%b>b/2.0)
              cout<<a/b+1;
              else
              cout<<a/b;
              }
    }
} 
