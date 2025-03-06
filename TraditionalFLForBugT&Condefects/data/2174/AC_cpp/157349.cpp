#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    float m;
    while(cin>>a>>b)
    {
        m=b;
        if(b==0)
            cout<<"error"<<endl;
        else
        {
            if(a%b>=m/2)
                cout<<a/b+1<<endl;
            else
                cout<<a/b<<endl;
        }
    }
}
