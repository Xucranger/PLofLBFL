#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        c=a/b;
        d=a-b*c;
        if(d*1.0/b>=0.5&&d*1.0/b<1)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
