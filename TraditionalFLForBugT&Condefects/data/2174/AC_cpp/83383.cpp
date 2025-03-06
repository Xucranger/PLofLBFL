#include <iostream>
using namespace std;
int main()
{
    double a,b,d;
    int c;
    while(cin>>a>>b)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {d=a*1.0;
        c=(int)(d/b+0.5);
        cout<<c<<endl;
        }
    }
}
