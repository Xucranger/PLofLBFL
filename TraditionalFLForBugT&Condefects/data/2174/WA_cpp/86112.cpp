#include<iostream>
using namespace std;
int main()
{
    int a,b,d;
    float c;
    while(cin>>a>>b)
    {
          if(b==0)
          cout<<"error"<<endl;
          else 
          c=a/b;
          d=(int)(c+0.5);
          cout<<d<<endl;
     }   
    return 0;
}
