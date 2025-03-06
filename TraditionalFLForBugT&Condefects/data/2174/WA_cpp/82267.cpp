#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float s;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
            cout<<a/b<<endl;
    }
}
