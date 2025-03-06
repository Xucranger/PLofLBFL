#include<iostream>
using namespace std;
int main()
{
        float c,a,b;
        while(cin>>a>>b)
        {if(b==0)
        cout<<"error"<<endl;
        else
        {c=a/b+0.5;
                cout<<int(c)<<endl;
                }
        }
}
