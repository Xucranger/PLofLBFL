#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b)
    {
        if(b==0)
        {cout<<"error";return 1;}
        c=a/b;
        d=a%b;
        if(d*2>=b)cout<<c+1;
        else cout<<c;
    }
    return 0;
}
