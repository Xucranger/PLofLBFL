#include<iostream>
using namespace std;
int main()
{
    double a,b;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
        {
            int c = a/b+0.5;
            cout<<c<<endl;
        }
    }
}
