#include<iostream>
using namespace std;
int main()
{
    int b,t1;
    float a,t;
    while(cin>>a>>b)
    {
      if(b==0)
      {
         cout<<"error"<<endl;
         continue;
         }
       t=a/b;
       t1=t;
       if((t-t1)>=0.5)   
       cout<<t1+1<<endl;
       else
       cout<<t1<<endl;
       }
       return 0;
       }
