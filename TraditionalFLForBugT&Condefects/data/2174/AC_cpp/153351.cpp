#include<iostream>
using namespace std;
inline void f(int a,int b)
{
if(b==0)   cout<<"error";    
       else if((10*a/b)%10>=5)
       cout<<a/b+1;
       else cout<<a/b;
       cout<<endl;
}
int main()
{
int a,b;    
    while(cin>>a>>b)
    {
    f(a,b);                
    }
}
