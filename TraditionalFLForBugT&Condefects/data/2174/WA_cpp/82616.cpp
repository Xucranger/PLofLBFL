#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
            {cout<<"error"<<endl;
            continue;}
        else
            {c=a/b;
        cout<<setprecision(0)<<c<<endl;
            }
    }
}
