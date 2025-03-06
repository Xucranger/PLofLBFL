#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(m==0)
            cout<<"error"<<endl;
        else if(double (n%m)<double (m)/2)
            cout<<n/m<<endl;
        else
            cout<<n/m+1<<endl;
    }
    return 0;
}
