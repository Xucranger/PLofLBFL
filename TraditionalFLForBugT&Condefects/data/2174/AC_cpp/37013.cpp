#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float t;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            t=1.0*a/b;
            if((t-(a/b))>=0.5)
            {
                cout<<((a/b))+1<<endl;
            }
            else
            {
                cout<<(a/b)<<endl;
            }
        }
    }
    return 0;
}
