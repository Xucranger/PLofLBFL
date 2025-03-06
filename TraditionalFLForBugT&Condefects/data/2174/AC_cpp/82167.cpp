#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
        {
        c=a%b;
        if(b%2==0)
        {
            if(c>=b/2)
                d=a/b+1;
            else
                d=a/b;
        }
        else
        {
            if(c>(b+1)/2)
                d=a/b+1;
            else
                d=a/b;
        }
        cout<<d<<endl;
        }
    }
}
