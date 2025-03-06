#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0) cout<<"error"<<endl;
        else {c=(double)a/b+0.5;
        c=(int)c;
        cout<<c<<endl;}
    }
    return 0;
}
