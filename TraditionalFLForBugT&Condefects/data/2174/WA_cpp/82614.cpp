#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
            {cout<<"error"<<endl;
            continue;}
        else
            {c=a/b;
        cout<<c<<endl;
            }
    }
}
