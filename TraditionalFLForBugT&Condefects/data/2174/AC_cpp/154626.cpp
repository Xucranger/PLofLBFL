#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b!=0)
        cout<<(a+b/2)/b<<endl;
        else
        cout<<"error"<<endl;
    }
}
