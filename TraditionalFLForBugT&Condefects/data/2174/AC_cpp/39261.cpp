#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    while(cin>>a>>b)
    {
        if(b!=0)
        {
        t=(float)a/b+0.5;
        cout<<t<<endl;
        }
        else
        {
        cout<<"error"<<endl;
        }
    }
}
