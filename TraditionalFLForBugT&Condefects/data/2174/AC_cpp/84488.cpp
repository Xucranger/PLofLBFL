#include <iostream>
using namespace std;
int main()
{
    float a,b,x;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
        {
            x=a/b+0.5;
            int sum=x;
            cout<<sum<<endl;
        }
    }
    return 0;
}
