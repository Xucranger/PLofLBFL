#include<iostream>
#define EPS 1e-8
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(!b)
            cout<<"error\n";
        else
            cout<<(int)((a+0.0)/b+0.5)<<endl;
    }
}
