#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int c;
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        c=a%b;
        if(2*c>=b)
            cout<<a/b+1<<endl;
        else
            cout<<a/b<<endl;
    }
    return 0;
}
