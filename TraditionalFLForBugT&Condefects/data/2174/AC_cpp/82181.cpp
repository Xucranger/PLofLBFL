#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
           cout<<(int)((float)a/b+0.5)<<endl;   //四舍五入 
  }
}
