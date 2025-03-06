#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        cout<<a/b<<endl;
    }
    return 0;
}
