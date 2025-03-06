#include<iostream>
using namespace std;
int s;
int divide(int a,int b)
{
      if(a%b*2>=b)
        s=a/b+1;
      else
        s=a/b;
      return s;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
    if(b==0)
        cout<<"error"<<endl;
    else
        cout<<divide(a,b)<<endl;
    }
    return 0;
}
