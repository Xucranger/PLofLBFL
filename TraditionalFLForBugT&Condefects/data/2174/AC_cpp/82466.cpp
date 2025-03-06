#include<iostream>
using namespace std;
int main()
{
    float a,b;
    while(cin>>a>>b)
    {
    if(b)
    cout<<(int)(a/b+0.5)<<endl;
    else
    cout<<"error"<<endl;
    }
}
