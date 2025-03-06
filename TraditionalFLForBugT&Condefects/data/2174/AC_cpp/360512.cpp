#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        {cout<<"error\n";
        continue;
        }
        c=a%b;
        if(2*c>=b)c=a/b+1;
        else c=a/b;
        cout<<c<<"\n";
    }
    return 0;
}
