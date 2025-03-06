#include<iostream>
using namespace std;
int main()
{
    float a,b;
    float m,n;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            m=(a/b);
            n=(int)(a/b);
            if((m-n)>=0.5)
            {
                cout<<(int)(a/b)+1<<endl;
            }
            else
            {
                cout<<(int)(a/b)<<endl;
            }
        }
    }
    return 0;
}
