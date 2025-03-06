#include<iostream>
using namespace std;
int main(void)
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b!=0)
        cout<<a/b<<endl;
        else
        cout<<"error"<<endl;
    }
}
