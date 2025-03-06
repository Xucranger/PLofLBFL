#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int c;
    while(cin>>a>>b)
    {
        if(b==0)cout<<"error"<<endl;
        else
       {
            c=(int)(a/b+0.5);
        cout<<c<<endl;
       }
    }
}
